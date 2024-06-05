#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n),b(n);

        for(int i=0;i<n; i++) cin >> a[i];
        for(int i=0;i<n; i++) cin >> b[i];

        sort(a.begin(),a.end());
        sort(b.rbegin(),b.rend());

        int i=0, j=n-1;
        long long ans = 1;

        for(; i<n; i++){
            int temp = upper_bound(a.begin(),a.end(),b[i]) - a.begin();
            ans = (1LL * ans * (n-temp-i))%mod;
        }

        cout << ans%mod << "\n";
    }
}