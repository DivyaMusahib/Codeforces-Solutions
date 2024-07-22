#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;


void solve(){
    int n ,k;
    cin >> n >> k;
    k--;

    if(n%2) {
      cout << (1+(k+k/(n/2))%n) << "\n";
    }
    else {
      cout << (1+k%n) << "\n";
    }
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t; while(t--)
        solve();
        
}