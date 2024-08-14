#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;

void solve() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];
    int tt;
    cin >> tt;
    while (tt--) {
        map<char, int> mp;
        map<int, char> mp2;
        string s;
        cin >> s;

        if (s.size() != n) {
            cout << "NO\n";
        } else {
            bool ans = true;
            for (int i = 0; i < n; i++) {
                if (mp.find(s[i]) != mp.end()) {
                    if (mp[s[i]] != arr[i]) {
                        ans = false;
                        break;
                    }
                } else {
                    mp[s[i]] = arr[i];
                }

                if (mp2.find(arr[i]) != mp2.end()) {
                    if (mp2[arr[i]] != s[i]) {
                        ans = false;
                        break;
                    }
                } else {
                    mp2[arr[i]] = s[i];
                }
            }
            if (ans) cout << "YES\n";
            else cout << "NO\n";
        }
    }
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t; while (t--)
        solve();

    return 0;
}
