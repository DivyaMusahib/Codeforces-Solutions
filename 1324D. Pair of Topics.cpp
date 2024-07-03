#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define yes cout << "YES";
#define no cout << "NO";

void solve() {
    int n;
    cin >> n;

    vector<ll> a(n), b(n);
    for(int i=0; i<n; i++) cin >> a[i];
    for(int i=0; i<n; i++) cin >> b[i];

    vector<ll>c(n);
    for(int i=0; i<n; i++) c[i] = a[i] - b[i];
    sort(c.begin(),c.end());
    // for(auto it: c){
    //     cout << it << " ";
    // }
    // cout << "\n";
    ll ans = 0;
    for(int i=0; i<n; i++){
        if(c[i]<=0){
            ans = ans +  n - (lower_bound(c.begin(),c.end(),abs(c[i])+1) - c.begin());
        }
        else ans = ans +  n - i -1;
        // cout << ans << " ";
    }
    // cout << "\n";

    cout << ans;

}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif

    // int t; cin >> t; while (t--)
        solve();
}