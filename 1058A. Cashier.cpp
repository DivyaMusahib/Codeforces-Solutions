#include<bits/stdc++.h>
using namespace std;

 
int main() {
	ios_base::sync_with_stdio(0); cin.tie(0), cout.tie(0);
    int n,l,a;
	cin >> n >> l >> a;
	int cur = 0;
	int res = 0;
	for (int i = 0; i < n; i++) {
		int t, l; cin >> t >> l;
		res += (t - cur) / a;
		cur = t + l;
	}
	res += (l - cur) / a;
	cout << res << '\n';
 
	return 0;
}