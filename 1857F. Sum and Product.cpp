#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;

void solve(){
    int n; cin >> n;
    map<ll,ll>mp;
    for(int i=0; i<n; i++) {
        int x;
        cin >> x;
        mp[x]++;
    }
    int q; cin >> q;
    while(q--) {
        ll x ,y;
        cin >> x >> y;
        if((x*x - 4 *y) < 0) cout << 0 << " ";
        else {
            ll s = sqrt(x*x - 4*y);
            ll r1 = (x+s) /2;
            ll r2 = (x-s) /2;
            if((r1 + r2)!=x || (r1*r2)!=y ) cout << 0 << " ";
            else if(r1 == r2){
                cout << 1ll*(mp[r1]*(mp[r1]-1))/2 << " ";
            }
            else {
                cout << 1ll*mp[r1]*mp[r2] << " ";
            } 
        }
    }

    cout << "\n";
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t; while(t--)
        solve();
        
}