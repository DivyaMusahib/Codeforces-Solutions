#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;


void solve(){
    ll n,k;
    cin >> n >> k;
    ll ops = 0;
    while(!(n<=1)){
        n = n - (k-1);
        ops++;
    }
    cout << ops << "\n";
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t; while(t--)
        solve();
        
}