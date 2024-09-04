#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;

void solve(){
    ll a,b,c;
    cin >> a >> b >> c;
    ll temp1 = ceil(double(a)/c);
    ll temp2 = ceil(double(b)/c);
    if(temp1 > temp2) cout << temp1*2 - 1;
    else cout << max(temp1,temp2) * 2 ;
    cout << "\n";
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t; while(t--)
        solve();
        
}