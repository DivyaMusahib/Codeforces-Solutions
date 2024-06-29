#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    // Copy the array and sort it
    vector<int> sorted_a = a;
    sort(sorted_a.begin(), sorted_a.end());

    // Find the segment to reverse
    int start = 0, end = n - 1;
    while (start < n && a[start] == sorted_a[start]) {
        start++;
    }
    while (end > start && a[end] == sorted_a[end]) {
        end--;
    }

    if (start >= end) {
        cout << "yes\n1 1\n";
        return;
    }

    // Reverse the segment
    reverse(a.begin() + start, a.begin() + end + 1);

    // Check if the array is sorted
    if (a == sorted_a) {
        cout << "yes\n" << start + 1 << " " << end + 1 << "\n";  // +1 for 1-based indexing
    } else {
        cout << "no\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    return 0;
}
