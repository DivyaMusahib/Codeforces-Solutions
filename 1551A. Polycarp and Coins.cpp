#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;


void solve(){
    int n;
    cin >> n;
    int ans = n/3;
    if(n%3 == 0 ) cout << ans << " " << ans << "\n";
    else if(n%3 == 1 ) cout << ans+1 << " " << ans << "\n";
    else if(n%3 == 2 ) cout << ans << " " << ans+1 << "\n";
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t; while(t--)
        solve();
        
}