#include <bits/stdc++.h>

using namespace std;

int main() {
    
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;

        int ans = s.size();

        //case 1: 00 50
        int cur = s.size() - 1;
        while (cur >= 0) {
            if (s[cur] == '0') {
                --cur;
                break;
            }
            --cur;
        }
        while (cur >= 0) {
            if (s[cur] == '0' || s[cur] == '5') {
                break;
            }
            --cur;
        }

        if (cur >= 0) {
            ans = min(ans ,(int) s.size() - cur - 2);
        }

        // 25 75
        cur = s.size() - 1;
        while (cur >= 0) {
            if (s[cur] == '5') {
                --cur;
                break;
            }
            --cur;
        }
        while (cur >= 0) {
            if (s[cur] == '2' || s[cur] == '7') {
                break;
            }
            --cur;
        }

        if (cur >= 0) {
            ans = min(ans ,(int) s.size() - cur - 2);
        }

        cout << ans << endl;

    }
    return 0;
}