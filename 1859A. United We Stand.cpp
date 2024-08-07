#include<bits/stdc++.h>
using namespace std;
 
void solve() {
	int n = 0;
    cin >> n; 
	vector<int>arr(n,0);

	for (auto& x : arr) cin >> x;

	sort(arr.begin(), arr.end());

	if (arr.back() == arr[0]) {
		cout << "-1\n";
		return;
	}
	else {
		int it = 0;
		while (arr[it] == arr[0]) it++;
		cout << it << " " << n - it << "\n";
		for (int j = 0; j < it; ++j) cout << arr[j] << " ";
		for (int j = it; j < n; ++j) cout << arr[j] << " ";
	}
}
 
int main() {
	int t = 0; cin >> t;
	while (t--) solve();
	return 0;
}