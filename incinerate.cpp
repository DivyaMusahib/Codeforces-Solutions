#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t;
    cin >> t;
    while(t--) {
        int n, k;
        cin >> n >> k;
        vector<pair<int, int>> monsters(n);
        for(int i = 0; i < n; i++) cin >> monsters[i].second; // health
        for(int i = 0; i < n; i++) cin >> monsters[i].first; // power

        // Sort by power
        sort(monsters.begin(), monsters.end());

        bool success = true;
        while(k > 0) {
            int min_power = INT_MAX;
            for(int i = 0; i < n; i++) {
                if(monsters[i].second > 0) { // if monster is alive
                    monsters[i].second -= k;
                    if(monsters[i].second > 0) {
                        min_power = min(min_power, monsters[i].first);
                    }
                }
            }
            if(min_power == INT_MAX) break; // All monsters are dead

            k -= min_power;
        }

        for(int i = 0; i < n; i++) {
            if(monsters[i].second > 0) {
                success = false;
                break;
            }
        }

        if(success) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}
