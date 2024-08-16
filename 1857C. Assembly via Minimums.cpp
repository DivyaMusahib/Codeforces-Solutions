#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;

void solve(){
    ll n; cin >> n;
    ll tt = ((n)*(n-1)*1ll)/2;
    vll v(tt);
    for(int i=0; i<tt; i++) cin >> v[i];
    sort(v.begin(),v.end());
    int x = 0;
    for(int i=0; i<tt; i++){
        x++;
        if(x==n-1){
            cout << v[i] << " ";
            x = 0;
            n--;
        }
    }
    for(int i=0; i<n; i++){
        cout << v[tt-1] << " ";
    }
    cout << "\n";
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t; while(t--)
        solve();
        
}