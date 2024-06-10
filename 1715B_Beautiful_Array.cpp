// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//     int t;
//     cin >> t;

//     while(t--){
//         long long n,k,b,s;
//         cin >> n >> k >> b >> s;
//         if(s/k < b) cout << -1 << "\n";
//         else{
//             if((s/k)*1LL == 1LL*b){
//                 n--;
//                 while(n--){
//                     cout << 0 << " ";
//                 }
//                 cout << s << "\n";
//             }
//             else if(s/k > b){
//                 if((n-1)>0 && (s - 1LL*((b+1)*(k) -1))/(n-1) < k) {
//                     if(s - ((b+1)*(k) -1) > 0 ){
//                     cout << (b+1)*(k) -1 << " ";
//                     s = s - 1LL*((b+1)*(k) -1);
//                     }
//                     else{
//                         cout << s << " ";
//                         s = 0;
//                     }
//                     n--;
//                     // cout << s << "tjis is s\n";
//                     while((s-(k-1))>=0){
//                         cout << k-1 << " ";
//                         s = s- (k-1);
//                         n--;
//                     }
//                     cout << s << " ";
//                     n--;
//                     for(int i=0; i<n; i++){
//                         cout << 0 << " ";
//                     }
//                     cout << "\n";
//                 }
//                 else{
//                     cout << -1 << "\n";
//                 }
//             }

//         }

//     }
// }


// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//   ios_base::sync_with_stdio(0);
//   cin.tie(0);
//   cout.tie(0);

//   int t;
//   cin >> t;

//   while (t--) {
//     long long n, k, b, s;
//     cin >> n >> k >> b >> s;

//     if (s < b * k) {
//       cout << -1 << "\n";
//     }
//     else {
//       if (s == 0) {
//         for (int i = 0; i < n; i++) {
//           cout << 0 << " ";
//         }
//         cout << "\n";
//       }
//       else if ((s / k) == b) {
//         n--;
//         cout << s << " ";
//         while (n--) {
//           cout << 0 << " ";
//         }
//         cout << "\n";
//       }
//       else if (s / k > b) {
//         if ((n - 1) > 0 && ((s - ((b + 1) * (k) - 1)) / (n - 1)) < k) {

//           if (s - ((b + 1) * (k) - 1) >= 0 && ((b + 1) * (k) - 1)>=0) {
//             cout << (b + 1) * (k) - 1 << " ";
//             s = s - ((b + 1) * (k) - 1);
//           } else {
//             cout << s << " ";
//             s = 0;
//           }
//           n--;
//           while ((s - (k - 1)) >= 0 && (k-1)>=0 && s>0) {
//             cout << k - 1 << " ";
//             s = s - (k - 1);
//             n--;
//           }
//           cout << s << " "; 
//           n--;
//           for (int i = 0; i < n; i++) {
//             cout << 0 << " ";
//           }
//           cout << "\n";
//         } else {
//           cout << -1 << "\n";
//         }
//       } else {
//         cout << -1 << "\n";
//       }
//     }
//   }
// }


#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  int t;
  cin >> t;

  while (t--) {
    long long n, k, b, s;
    cin >> n >> k >> b >> s;
    vector <long long> a(n);
    a[0] = k * b;
    s -= k * b;
        if(s < 0) cout << "-1\n";
        else{
            for(int i = 0; i < n; ++i){
                int now = min(k - 1, s);
                a[i] += now;
                s -= now;
            }
            if (s > 0) cout << "-1\n";
            else {
                for (int i = 0; i < n; ++i) cout << a[i] << " ";
                cout << "\n";
            }
        }
  }
}
