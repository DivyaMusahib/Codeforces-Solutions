#include<bits/stdc++.h>
 
using namespace std;
 
int main()
{
	int t;
	cin >> t;
	for(int i = 0; i < t; i++)
	{
		int m, k, a1, ak;
		cin >> m >> k >> a1 >> ak;
		int taken_k = m / k;
		int taken_1 = m % k;
		int taken_fancy_1 = max(0, taken_1 - a1);
		int left_regular_1 = max(0, a1 - taken_1);
		int taken_fancy_k = max(0, taken_k - ak);
		int to_replace = min(left_regular_1 / k, taken_fancy_k);
		int ans = taken_fancy_1 + taken_fancy_k - to_replace;
		cout << ans << endl;
	}
}

// #include<bits/stdc++.h>
// using namespace std;

// void solve(){
//     long long m, k, a1, ak;
//     cin >> m >> k >> a1 >> ak;
    
//     if(m/k <= ak) {
//         if (m%k == 0){
//             cout << 0 << "\n";
//         } else {
//             if (m%k <= a1) {
//                 cout << 0 << "\n";
//             } else {
//                 cout << m%k - a1 << "hiii\n";
//             } 
//         }
//     } else {
//         if (m%k == 0) {
//             cout << m/k - ak << "\n";
//         } else {
//             if ((m - ak*k) <= a1) {
//                 cout << 0 << "\n";
//             } else {
//                 if ( (m - ak*k - a1)% k == 0) {
//                     cout << (m - ak*k - a1)/k << "\n";
//                 } else {
//                     cout << (m - ak*k - a1)/k + (m - ak*k - a1) - ((m - ak*k - a1)/k)*k  << "\n";
//                 } 
//             }
//         }
//     }
// }

// int main(){
//     ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//     int t; cin >> t; while(t--)
//         solve();
        
// }