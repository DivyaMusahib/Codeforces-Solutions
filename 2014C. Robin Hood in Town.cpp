#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;

void solve(){
    ll n;
    cin >>n;
    vector<ll>arr(n);
    ll sum = 0;
    for(int i=0; i<n; i++){
        cin >> arr[i];
        sum+= arr[i];
    }
    sort(arr.begin(),arr.end());
    if(n==1 || n==2) cout << -1 << "\n";
    else if((2*n*arr[n/2]-sum)<0) cout << 0 << "\n";
    else cout << 2*n*arr[n/2]*1ll - sum + 1 << "\n";
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t; while(t--)
        solve();
        
}