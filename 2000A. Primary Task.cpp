#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;


void solve(){
    int n;
    cin >> n;
    if(n<=100) cout << "NO\n";
    else if(n <1000) {
        if(n/10 == 10 && n%10 >= 2){
            cout << "YES\n";
        } else cout << "NO\n";
    }
    else if(n < 10000 && (n%100 >= 10)) {
        if(n/100 == 10) cout << "YES\n";
        else cout << "NO\n";
    }
    else if( n < 100000 && n%1000 >= 100) {
        if(n/1000 == 10) cout << "YES\n";
        else cout << "NO\n";
    }
     else cout << "NO\n";
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t; while(t--)
        solve();
        
}