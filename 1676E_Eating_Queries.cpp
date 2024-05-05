#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n,q;
        cin >> n  >> q;
        
        vector<long long>arr(n);
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }
        sort(arr.rbegin(),arr.rend());

        vector<long long>prefixsum;
        int x = 0;
        for(int i=0; i<n; i++){
            x += arr[i];
            prefixsum.emplace_back(x);
        }
        cout << "\n";

        for(int i=0; i<q; i++){
            int k;
            cin >> k;
            int ans = lower_bound(prefixsum.begin(),prefixsum.end(),k) - prefixsum.begin()+1;
            if(ans>n) cout << -1 << "\n";
            else cout << ans << "\n";
        }
    }
}