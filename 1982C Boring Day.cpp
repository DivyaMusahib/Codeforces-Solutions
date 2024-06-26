#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n, l, r;
    cin >> n >> l >> r;

    vector<long long> arr(n);
    for (long long i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    long long count = 0;
    long long prefixSum = 0;
    long long j = 0;

    for (long long i = 0; i < n; ++i) {
        prefixSum += arr[i];

        while (prefixSum > r && j <= i) {
            prefixSum -= arr[j];
            j++;
        }

        if (prefixSum >= l && prefixSum <= r) {
            count++;
            prefixSum = 0;
            j = i + 1; // Move j to the next element after the current valid round
        }
    }

    cout << count << "\n";
}

int main() {
    long long t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}