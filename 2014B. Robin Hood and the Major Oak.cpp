#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;

void solve(){
    int n,k;
    cin >> n >> k;
    if(n%2 == 0) {
        if(k%4==0 || (k-1)%4 == 0) cout << "YES\n";
        else cout << "NO\n";
    }
    else {
        if((k+1)%4==0 || k%4==0) cout << "YES\n";
        else cout << "NO\n";
    }
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t; while(t--)
        solve();
        
}