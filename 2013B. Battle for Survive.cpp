#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;

void solve(){
    ll n;
    cin >> n;
    vector<ll>arr(n);
    ll sum = 0;
    for(int i=0; i<n; i++) {
        cin >> arr[i];
        if(i<n-2) sum+=arr[i];
    }

    cout << arr[n-1] - arr[n-2] + sum << "\n";
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t; while(t--)
        solve();
        
}