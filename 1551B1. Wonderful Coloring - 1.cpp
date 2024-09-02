#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;

void solve(){
    string s; cin >> s;
    vi v(26,0);
    int ans = 0, single = 0;
    for(int i=0; i<s.size(); i++) v[s[i]-'a']++;
    for(auto &it : v) {
        if(it >=2 ) ans++;
        else if(it==1) single++;
    }
    cout << ans + single/2 ; cout << "\n";
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t; while(t--)
        solve();
        
}