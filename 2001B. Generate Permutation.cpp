#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;


void solve(){
    int n; cin >> n;
    if(n==1) cout << 1 ;
    else if (n%2 == 0) cout << -1;
    else {
        for(int i=(n+1)/2 ; i<=n; i++ ){
            cout << i << " ";
        }
        for(int i=n/2; i>=1; i--){
            cout << i << " ";
        }
    }
    cout << "\n";    

}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t; while(t--)
        solve();
        
}