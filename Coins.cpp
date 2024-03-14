// // #include<bits/stdc++.h>
// // using namespace std;

// // int main(){
// //     int t;
// //     cin >> t;

// //     for(int i=0; i<t; i++){
// //         int n, k;
// //         cin >> n >> k;

// //         if((n%k)%2==0) cout << "YES\n";
// //         else if(n%2==0)cout << "YES\n";
// //         else cout << "NO\n";
// //     }
// //     return 0;
// // }



#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    for(int i=0; i<t; i++){
        int n,k;
        cin >> n >> k;
        int count = 0;
        int temp = n/k;

        for(int x=0; x<=temp; x++){
            if(n - x * k >= 0 && (n - x * k) % 2 == 0){
                cout << "YES\n";
                count++;
                break;
            }
        }
        if(count==0) cout << "NO\n";
        // else cout << "YES\n";
    }
    return 0;
}



// #include <iostream>
// using namespace std;

// int main() {
//     int test_cases;
//     cin >> test_cases;

//     for (int i = 0; i < test_cases; ++i) {
//         int n, k;
//         cin >> n >> k;

//         bool found = false;
//         for (int x = 0; x < 2; ++x) {
//             if (n - x * k >= 0 && (n - x * k) % 2 == 0) {
//                 cout << "YES" << endl;
//                 found = true;
//                 break;
//             }
//         }

//         if (!found) {
//             cout << "NO" << endl;
//         }
//     }

//     return 0;
// }
