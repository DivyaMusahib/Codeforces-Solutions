#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;

void solve(){
    ll n;
    cin >> n;
    string s = to_string(n);
    char ch = s[0];
    for(auto &it : s){
        it = ch;
    }
    ll temp = stoll(s);
    if(s.size()==1){
        cout << n << "\n";
    } else{
        ll ans = (s.size()-1)*9;
        if(temp>n){
            ans += s[0]-'0' - 1;
        } else {
            ans += s[0] -'0' ;
        }
        cout << ans << "\n";
    }
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t; while(t--)
        solve();
        
}