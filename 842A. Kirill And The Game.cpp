#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;

void solve(){
    ll l,r,x,y,k;
    cin >> l >> r >> x >> y >> k;
    bool ans = false;
    for(int i=x; i<=y; i++) {
        if(i*k <=r && i*k>=l){
            ans = true;
            break;
        }
    }   
    if(ans) cout << "YES";
    else cout << "NO";
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    // int t; cin >> t; while(t--)
        solve();
        
}