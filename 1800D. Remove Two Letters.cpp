#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;

void solve(){
    int n; cin >> n;
    string s; cin >> s;
    int ans = 1;
    for(int i=2; i<n; i++){
        if(s[i]!=s[i-2]) ans++; 
    }
    cout << ans << "\n";

}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t; while(t--)
        solve();
        
}