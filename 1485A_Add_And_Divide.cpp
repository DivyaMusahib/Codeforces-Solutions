#include <bits/stdc++.h>
using namespace std;

int check(long long a, long long b) {
    long long c = 0;
    while (a > 0) {
        a = a / b;
        c++;
    }
    return c;
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t;
    cin >> t;

    while (t--) {
        long long a, b;
        cin >> a >> b;
        long long count = LLONG_MAX; 
        long long ans = 0;

        if (b == 1) {
            b++;
            ans = 1;
        }

        for (long long i = b; i <= b + 100; i++) {
            long long temp = check(a, i);
            count = min(count, temp + (i - b));
        }

        cout << count + ans << "\n"; 
    }
    return 0;
}
