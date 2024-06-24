#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
    int n,m;
    cin >> n >> m;

    int arr[n][m];

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> arr[i][j];
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            int maxOfneigh = INT_MIN;
            bool isGreaterThanNeigh = true;
            if(isGreaterThanNeigh && i-1 >= 0){
                if(arr[i-1][j] >= arr[i][j]){
                    isGreaterThanNeigh = false;
                }
                else{
                    maxOfneigh = max(maxOfneigh, arr[i-1][j]);
                }
            }
            if(isGreaterThanNeigh && i+1 < n){
                if(arr[i+1][j] >= arr[i][j]){
                    isGreaterThanNeigh = false;
                }
                else{
                    maxOfneigh = max(maxOfneigh, arr[i+1][j]);
                }
            }
            if(isGreaterThanNeigh && j-1 >= 0){
                if(arr[i][j-1] >= arr[i][j]){
                    isGreaterThanNeigh = false;
                }
                else{
                    maxOfneigh = max(maxOfneigh, arr[i][j-1]);
                }
            }
            if(isGreaterThanNeigh && j+1 < m){
                if(arr[i][j+1] >= arr[i][j]){
                    isGreaterThanNeigh = false;
                }
                else{
                    maxOfneigh = max(maxOfneigh, arr[i][j+1]);
                }
            }
            if(isGreaterThanNeigh){
                arr[i][j] = maxOfneigh;
            }
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0;j<m;j++){
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    #ifndef ONLINE_JUDGE 
    freopen("input.txt", "r", stdin); 
    freopen("output.txt", "w", stdout); 
    #endif 

    int t;
    cin >> t;
    while (t--) {
        solve();
        // cout << "\n";
    }
}