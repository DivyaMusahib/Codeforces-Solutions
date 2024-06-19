#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        if (n <= k) {
            cout << 1 << "\n";
        } else if (k == 1) {
            cout << n << "\n";
        } else {
            int ans = n;

            for (int i = 1; i * i <= n; ++i) {
                if (n % i == 0) {
                    if (i <= k) {
                        ans = min(ans, n / i);
                    }
                    if (n / i <= k) {
                        ans = min(ans, i);
                    }
                }
            }
            cout << ans << "\n";
        }
    }

    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//     int t;
//     cin >> t;

//     while (t--) {
//         int n, k;
//         cin >> n >> k;

//         if (n <= k) {
//             cout << 1 << "\n";
//         } else if (k == 1) {
//             cout << n << "\n";
//         } else {
//             int ans = n;
//             if (k <= sqrt(n)) {
//                 for (int i = 1; i <= k; i++) { 
//                     if (n % i == 0) {
//                         ans = max(ans, n / i);
//                     }
//                 }
//                 cout << ans << "\n";
//             } else {
//                 int ans2 = n;
//                 for (int i = 1; i <= sqrt(n); i++) {
//                     if (n % i == 0) {
//                         if (i <= k) {
//                             ans = min(ans, n / i);
//                         }
//                         if (n / i <= k) {
//                             ans2 = min(ans2, i);
//                         }
//                     }
//                 }
//                 cout << min(ans, ans2) << "\n";
//             }
//         }
//     }
//     return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;


// int main(){
//     ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//     int t;
//     cin >> t;

//     while(t--){
//         int n,k;
//         cin >> n >> k;
//         if(n<=k) cout << 1 << "\n";
//         else if(k==1) cout << n << "\n";
//         else{

//             int ans = 0;
//             if(k<=sqrt(n)){
//                 for(int i=1; i<=k; i++){
//                     if(n%i == 0){
//                         ans = i; 
//                     }
//                 }
//                 cout << ans;
//             }
//             else{
//                 int ans2  = 0;
//                 for(int i=sqrt(n); i>=0;i--){
//                     if(n%i == 0){
//                         ans = i;
//                     }
//                     if(n%i== 0 && n/i <=k){
//                         ans2 = n/i;
//                     }
//                 }    
//                 cout << max(ans,ans2) << "\n";            
//             }
        
//         }
//     }
// }