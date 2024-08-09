#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;

void solve(){
    int n,k,a,b;
    cin >> n >> k >> a>> b;
    vector<pair<ll,ll>> v(n);
    for(int i=0; i<n; i++) {
        cin >> v[i].first >> v[i].second;
    }
    ll x1 = v[a-1].first, y1 = v[a-1].second; 
    ll x2 = v[b-1].first, y2 = v[b-1].second;
    ll ans1 = llabs(x1-x2) + llabs(y1-y2);

    ll nearestTo1 = LLONG_MAX/2;
    // llmax by 2 isiliye kyunki k zero hua toh nearest1 + nearest 2 out of bound chale jayega
    for(int i=0; i<k; i++) {
        nearestTo1 = min(nearestTo1, llabs(v[i].first-x1) + llabs(v[i].second-y1));
    }
    ll nearestTo2 = LLONG_MAX/2;
    for(int i=0; i<k; i++) {
        nearestTo2 = min(nearestTo2, llabs(v[i].first-x2) + llabs(v[i].second-y2));
    }

    ll ans = min(ans1, nearestTo1+nearestTo2);

    cout << ans << "\n";
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t; while(t--)
        solve();
        
}