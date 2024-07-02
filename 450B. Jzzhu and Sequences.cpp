#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define yes cout << "YES";
#define no cout << "NO";

void solve() {
    ll x ,y,n;
    cin >> x >> y >> n;
    if(n%6 == 1) cout << (x+1000000007)%1000000007;
    else if(n%6 == 2) cout << (y+1000000007)%1000000007;
    else if(n%6 == 3) cout << (y+1000000007)%1000000007-(((x+1000000007)%1000000007) + 1000000007) % 1000000007;
    else if(n%6 == 4) cout << -(x+1000000007)%1000000007;
    else if(n%6 == 5) cout << -(y+1000000007)%1000000007;
    else if(n%6 == 0) cout << (((x+1000000007)%1000000007) + 1000000007) % 1000000007 -(y+1000000007)%1000000007;
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