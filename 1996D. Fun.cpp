#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;


void solve(){
    ll n, x;
    cin >> n >> x;
    ll ans = 0;
    for(ll a = 1; a<=n && a<=x; a++) {
        for(ll b= 1; a*b<=n && (a+b)<=x ; b++) {
            ll c1 = (x-a-b) ,c2 = (n-a*b)/(a+b);
            ans += min(c1,c2);
        }
    }
    cout << ans << "\n";
}

// tc is nlogn 

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t; while(t--)
        solve();
        
}