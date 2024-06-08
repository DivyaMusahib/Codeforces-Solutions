#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(0); 
    cout.tie(0);

    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for(int i = 0; i < n; i++) cin >> arr[i];

        int i = 0, j = n - 1;
        int aliceScore = 0, bobScore = 0;
        int lastAlice = 0, lastBob = 0;
        int moves = 0;

        while(i <= j) {
            if(moves % 2 == 0) {  // Alice's turn
                int sum = 0;
                while(i <= j && sum <= lastBob) {
                    sum += arr[i];
                    i++;
                }
                aliceScore += sum;
                lastAlice = sum;
            } else {  // Bob's turn
                int sum = 0;
                while(i <= j && sum <= lastAlice) {
                    sum += arr[j];
                    j--;
                }
                bobScore += sum;
                lastBob = sum;
            }
            moves++;
        }

        cout << moves << " " << aliceScore << " " << bobScore << "\n";
    }
    return 0;
}


// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
//     int t;
//     cin >> t;
//     while(t--){
//         int n;
//         cin >> n;
//         int arr[n];
//         for(int i=0; i<n; i++) cin >> arr[i];
//         int  i = 1, j = n-1;
//         int aliceScore = arr[0];
//         int bobScore = 0;
//         int move = 1;



//         while(i<j){
//             int sum = 0;
//             if(move%2 == 1){
//                 while(sum>aliceScore && j>i){
//                     j--;
//                     sum += arr[j];
//                     bobScore += arr[j];
//                 }
//                 move++;
//                 if(i==j) break;
//             }
//             else if(move%2 == 0){
//                 while(sum>bobScore && j>i){
//                     i++;
//                     sum += arr[i];
//                     aliceScore += arr[i];
//                 }
//                 move++;
//                 if(i==j) break;
//             }
//         }

//         cout << move << " " << aliceScore << " " << bobScore << "\n";
//     }
// }