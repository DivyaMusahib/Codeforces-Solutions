#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define yes cout << "YES\n";
#define no cout << "NO\n";
#define MOD 1000000007 

void solve() {
    ll x, y, n;
    cin >> x >> y >> n;
    if (n % 6 == 1) cout << (x % MOD + MOD) % MOD << "\n";
    else if (n % 6 == 2) cout << (y % MOD + MOD) % MOD << "\n";
    else if (n % 6 == 3) cout << ((y % MOD - x % MOD) % MOD + MOD) % MOD << "\n";
    else if (n % 6 == 4) cout << (-x % MOD + MOD) % MOD << "\n";
    else if (n % 6 == 5) cout << (-y % MOD + MOD) % MOD << "\n";
    else if (n % 6 == 0) cout << ((-y % MOD + x % MOD) % MOD + MOD) % MOD << "\n";
}
// (-x % MOD + MOD) % MOD ensures that the result is within [0, MOD-1] even if -x % MOD is negative.

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif

    // int t; cin >> t; while (t--)
        solve();
}
