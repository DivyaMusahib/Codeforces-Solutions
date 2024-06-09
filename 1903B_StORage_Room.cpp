#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int arr[n][n];
        for(int i=0; i<n; i++){
            for(int j = 0; j < n; j++){
                cin >> arr[i][j];
            }
        }

        int ans[n];
        for(int i=0; i<n; i++) ans[i] = 1073741823;

        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if(i != j) ans[i] &= arr[i][j];
            }
        }

        bool check = true;
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if(i != j && (arr[i][j] != (ans[i] | ans[j]))){
                    check = false;
                    break;
                }
            }
            if(!check) break;
        }

        if(!check){
            cout << "NO\n";
        }
        else{
            cout << "YES\n";
            for(int i=0; i<n; i++){
                cout << ans[i] << " ";
            }
            cout << "\n";
        }
    }
}
