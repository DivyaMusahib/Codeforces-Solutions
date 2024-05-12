#include<bits/stdc++.h>
using namespace std;
 
int main(){	
    int n;
	cin >> n;
	vector <int> arr(n);
	for (int i = 0; i < n; ++i) cin >> arr[i];
	int ans = 0;
	for (int i = 0; i < n; ++i){
		int mx = INT_MIN;
		int mn = INT_MAX;
		int count = 0;
		for (int j = i; j < n; ++j){
			mx = max(mx, arr[j]);
			mn = min(mn, arr[j]);
			if (mx - mn > 1)
				break;
			count++;
		}
		ans = max(ans, count);
		if (n - i <= ans) break; // great move
	}
	cout << ans;
}


// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//   int n;
//   cin >> n;
//   vector<long long> arr(n);
//   for (int i = 0; i < n; i++) cin >> arr[i];

//   vector<long long> ans;
//   for (int i = 0; i < n; i++) {
//     bool isGreater = false;
//     bool isSmaller = false;
//     int j = i + 1; 
//     while (j < n) {
//       if (arr[j] == arr[i]) {
//         j++;
//         continue;
//       } else if ((arr[j] + 1) == arr[i]) {
//         if (isGreater) {
//           ans.push_back(j - i);
//           break;
//         } else {
//           isSmaller = true;
//         }
//       } else if ((arr[j] - 1) == arr[i]) {
//         if (isSmaller) {
//           ans.push_back(j - i);
//           break;
//         } else {
//           isGreater = true;
//         }
//       } else {
//         ans.push_back(j - i);
//         break;
//       }
//       j++;
//     }
//     if (j == n && (abs(arr[n - 1] - arr[i]) <= 1)) {
//       ans.push_back(j - i);
//     }
//   }

//   sort(ans.rbegin(), ans.rend());
//   cout << ans[0];

//   return 0;
// }



