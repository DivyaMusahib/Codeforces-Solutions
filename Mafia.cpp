#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define yes cout << "YES";
#define no cout << "NO";

void solve() {
    int n;
    cin >> n;
    vector<ll>arr(n);
    ll sum = 0;
    for(int i=0; i<n; i++){
        cin >> arr[i];
        sum += arr[i];
    }
    cout << ceil((float)sum/(float)(n-1));
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