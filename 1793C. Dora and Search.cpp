#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;

void solve(){
    int n; cin >> n;
    vector<ll>v(n);
    for(ll &it : v) cin >> it;
    ll mini = 1 , maxi = n;
    ll l = 0, r = n-1;
    bool ans = false;
    while(l<=r) {
        if(v[l] == maxi) {
            l++;
            maxi--;
        } else if(v[l]==mini) {
            l++;
            mini++;
        } else if(v[r]==maxi) {
            r--;
            maxi--;
        } else if(v[r]==mini) {
            r--;
            mini++;
        } else {
            ans = true;
            break;
        }
    }
    if(ans) cout << l+1 << " " << r+1 << "\n";
    else cout << "-1\n";
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t; while(t--)
        solve();
        
}