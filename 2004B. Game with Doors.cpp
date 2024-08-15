#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;


void solve(){
    int  l1 , r1; cin >> l1 >> r1;
    int  l2 , r2; cin >> l2 >> r2;
    int cml = max(l1 , l2);
    int cmr = min(r1 , r2);
    int cnt = max(0 , cmr - cml);
    if(cml > cmr){
        cout << 1 << "\n";  
        return;
    }
    
    if(abs(l1 - l2) > 0) cnt++;
    if(abs(r1 - r2) > 0) cnt++;
    
    cout << cnt << "\n";
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t; while(t--)
        solve();
        
}