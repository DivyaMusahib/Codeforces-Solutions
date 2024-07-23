#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;


void solve(){
    int n,k;
    cin >> n >> k;
    int ans = 0;
    if(k <= n){
        if(k==0) cout << 0 << "\n";
        else cout << 1 << "\n";
    }
    else{
    ans++;
    k = k-n;
    int x = n;
    while(k>0){
        x--;
        if(k>x){
            ans += 2;
            k = k - 2*x;
        }
        else{
            k = 0;
            ans++;
        }
    }
    cout << ans << "\n";
    }
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t; while(t--)
        solve();
        
}