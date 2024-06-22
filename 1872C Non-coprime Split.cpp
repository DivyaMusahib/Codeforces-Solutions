// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//     int t;
//     cin >> t;
//     while(t--){
//         int a,b;
//         cin >> a>> b;

//         if(b<=3){
//             cout << -1 << "\n";
//         }
//         else if((b-a)>=1){
//             cout << b/2 << " " << b/2 << "\n";
//         }
//         else if(a==b){
//             if(a%2 == 0){
//                 cout << a/2 << " " << a/2 << "\n";
//             }
//             else if(a%3 == 0){
//                 cout << a-3 << " " << 3 << "\n";
//             }
//             else{
//                 cout << -1 << "\n";
//             }
//         }
//     }
// }

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int a, b;
        cin >> a >> b;

        if (b <= 3) {
            cout << -1 << "\n";
        } else if ((b - a) >= 1) {
            cout << b / 2 << " " << b / 2 << "\n";
        } else if (a == b) {
            if (a % 2 == 0) {
                cout << a / 2 << " " << a / 2 << "\n";
            } else {
                // Try to find pairs (x, y) with gcd(x, y) != 1
                bool found = false;
                for (int i = 2; i <= sqrt(a); i++) {
                    if (a % i == 0) {
                        cout << a - i << " " << i << "\n";
                        found = true;
                        break;
                    }
                }
                if (!found) {
                    cout << -1 << "\n";
                }
            }
        } else {
            cout << -1 << "\n";
        }
    }
    return 0;
}
