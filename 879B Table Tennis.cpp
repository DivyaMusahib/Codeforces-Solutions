// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     long long n,k;
//     cin >> n >> k;
//     vector<pair<long long,long long>>arr(n);
//     for(long long i=0; i<n; i++){
//         cin >> arr[i].first;
//         arr[i].second = 0;
//     }

//     queue<pair<long long,long long>>q;
//     for(long long i=0; i<n; i++) q.push(arr[i]);

//     pair<long long,long long>player1 = q.front();
//         q.pop();
//     pair<long long,long long>player2 = q.front();
//         q.pop();

//     while(true){

//         if(player1.first > player2.first){
//             player1.second++;
//             player2.second =0;
//             q.push(player2);
//             q.front() = player2;
//             q.pop();

//             if(player1.second == k){
//                 cout << player1.first;
//                 return 0;
//             }

//         }
//         else{
//             player2.second++;
//             player1.second = 0;
//             q.push(player1);
//             q.front() = player1;
//             q.pop();

//             if(player2.second == k){
//                 cout << player2.first;
//                 return 0;
//             }

//         }


//     }

// }

#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n, k;
    cin >> n >> k;
    vector<long long> arr(n);
    for(long long i = 0; i < n; i++) {
        cin >> arr[i];
    }

    if (k >= n - 1) {
        // If k is greater than or equal to n - 1, the highest power will definitely win
        cout << *max_element(arr.begin(), arr.end()) << endl;
        return 0;
    }

    queue<long long> q;
    for(long long i = 0; i < n; i++) {
        q.push(arr[i]);
    }

    long long currentWinner = q.front();
    q.pop();
    long long winCount = 0;

    while (winCount < k) {
        long long challenger = q.front();
        q.pop();

        if (currentWinner > challenger) {
            winCount++;
            q.push(challenger);
        } else {
            currentWinner = challenger;
            winCount = 1;
            q.push(currentWinner);
        }
    }

    cout << currentWinner << endl;
    return 0;
}
