#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;


void solve(){
    int n,s,m;
    cin >> n >> s >> m;
    vector<pair<int,int>>arr(n+1);
    arr[0].second = 0;
    arr[0].first = 0;
    for(int i=1; i<=n; i++) {
        cin >> arr[i].first >> arr[i].second;
    }
    arr.push_back({m,m});

    int ans = 0;
    for(int i=1; i<arr.size(); i++) {
        ans = max(ans, arr[i].first - arr[i-1].second);
    }

    if(ans >= s) cout << "YES\n";
    else cout << "NO\n";
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t; while(t--)
        solve();
        
}