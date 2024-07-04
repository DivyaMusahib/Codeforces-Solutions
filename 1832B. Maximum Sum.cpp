#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    
    int t;
    cin >> t;
    
    while(t--) {
        ll n, k;
        cin >> n >> k;
        vector<ll> arr(n);
        
        for(int i = 0; i < n; i++) cin >> arr[i];
        
        sort(arr.begin(), arr.end());
        
        for(int i = 1; i < n; i++) {
            arr[i] += arr[i-1];
        }
        
        ll ans = 0;
        for(int i = 0; i <= k; i++) {
            ll temp = arr[n - k + i - 1] - (i > 0 ? arr[2 * i - 1] : 0);
            ans = max(ans, temp);
        }
        
        cout << ans << "\n";
    }
}