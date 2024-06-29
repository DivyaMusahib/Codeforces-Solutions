#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t;
    cin >> t;
    while(t--) {
        int n, k;
        cin >> n >> k;
        vector<pair<int, int>> arr(n);
        for(int i = 0; i < n; i++) cin >> arr[i].second; // health
        for(int i = 0; i < n; i++) cin >> arr[i].first; // power

        // Sort by power
        sort(arr.begin(), arr.end());

        bool success = true;
        int totalDamage = k;
        int i = 0;
        for(; i<n; i++){
            if(k>0 && (arr[i].second - totalDamage)>0){
                while(k>0 && (arr[i].second-totalDamage)>0){
                    k = k - arr[i].first;
                    totalDamage+= k;
                }
            }
            if (k<=0){
                break;
            }
        }
        
        if(i==n) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}
