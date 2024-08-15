#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;


void solve(){
    int n;
    cin >> n;
    vi arr(n);
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }
    if(n>2) cout << "NO\n";
    else if(n==2) {
        if(abs(arr[0]-arr[1])<=1) cout << "NO\n";
        else cout << "YES\n";
    } else cout << "YES\n";
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t; while(t--)
        solve();
        
}