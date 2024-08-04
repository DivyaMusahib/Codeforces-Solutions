#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;


void solve(){
    ll n;
    cin >> n;
    ll a=0,b=0,c=0,d=0;
    string s;
    cin >> s;
    for(ll i=0; i<s.size(); i++) {
        if(s[i]== 'A') a++;
        else if(s[i]=='B') b++;
        else if(s[i]=='C') c++;
        else if(s[i]=='D') d++;
    }
    ll ans = min(a,n) + min(b,n) + min(c,n) + min(d,n);
    cout << ans << "\n";
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t; while(t--)
        solve();
        
}