#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ll t;
    cin >> t;
    while(t--){
        ll n,q;
        cin >> n >> q;

        vector<ll>v(n);
        vector<ll>prefixsum(n);
        vector<ll>prefixmax(n);
        for(ll i=0; i<n; i++){
            cin >> v[i];

            if(i==0){
                prefixsum[i] = v[i];
                prefixmax[i] = v[i];
            }
            else{
                prefixsum[i] = v[i] + prefixsum[i-1];
                prefixmax[i] = max(prefixmax[i-1],v[i]);
            }
        }

        while(q--){
            ll temp;
            cin >> temp;
            ll ans = upper_bound(prefixmax.begin(),prefixmax.end(),temp) - prefixmax.begin() -1;
            if(ans!=-1)cout << prefixsum[ans] << " ";
            else cout << 0 << " ";
        }

        cout << "\n";
    }
}