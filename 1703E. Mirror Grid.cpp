#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
    int n;
    cin >> n;
    vector<vector<char>> arr(n, vector<char>(n));
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }

    int ans = 0;
    
    for (int x = 0; x < (n + 1) / 2; x++) {
        for (int y = x; y < n - x - 1; y++) {
            char a = arr[x][y];
            char b = arr[y][n - 1 - x];
            char c = arr[n - 1 - x][n - 1 - y];
            char d = arr[n - 1 - y][x];

            int count1 = (a == '1') + (b == '1') + (c == '1') + (d == '1');
            int count0 = 4 - count1;

            ans += min(count0, count1);
        }
    }

    cout << ans << "\n";
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t;
    cin >> t;
    while (t--)
        solve();
}

// #include<bits/stdc++.h>
// using namespace std;
// typedef long long ll;
// typedef vector<int> vi;
// typedef vector<ll> vll;

// void solve(){
//     int n;
//     cin >> n;
//     vector<vector<char>>arr(n,vector<char>(n));
//     for(int i=0; i<n; i++) {
//         for(int j=0; j<n; j++) {
//             cin >> arr[i][j];
//         }
//     }

//     int ans = 0;

//     for(int x= 0; x<(n+1)/2; x++) {
//         pair<int,int>p1 = {x,x};
//         pair<int,int>p2 = {x,n-1-x};

//         pair<int,int>p3 = {n-1-x,x};
//         pair<int,int>p4 = {n-1-x,n-1-x};

//         int temp = p2.second - p1.first;
//         for(int i=0; i<temp; i++) {
//             int count1 = 0;
//             int count0 = 0;
//             if(arr[p1.first][p1.second] == '1') count1++;
//             else count0++;
//             if(arr[p2.first][p2.second] == '1') count1++;
//             else count0++;
//             if(arr[p3.first][p3.second] == '1') count1++;
//             else count0++;
//             if(arr[p4.first][p4.second] == '1') count1++;
//             else count0++;
//             ans += min(count0,count1);
//             p1.second++;
//             p2.first++;
//             p3.second--;
//             p4.first--;
//         }
//     }

//     cout << ans << "\n";

// }

// int main(){
//     ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//     int t; cin >> t; while(t--)
//         solve();
        
// }