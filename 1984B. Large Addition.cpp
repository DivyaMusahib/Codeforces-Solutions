#include<bits/stdc++.h>
using namespace std;

void solve(){
    string s;
    cin >> s;
    if(s[0]!='1' || s[s.size()-1] == '9') cout << "NO\n";
    else {
        bool ans = true;
        for(int i=1; i<s.size()-1; i++){
            if(s[i]=='0') ans = false;
        }
        if(ans) cout << "YES\n";
        else cout << "NO\n";
    }
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t; while(t--)
        solve();
}