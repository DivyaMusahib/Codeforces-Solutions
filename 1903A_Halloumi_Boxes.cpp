#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin >> n >> k;
        int arr[n];
        for(int i=0; i<n; i++) cin >> arr[i];
        if(k>1) cout << "YES\n";
        else{
            bool ans = true;
            for(int i=0; i<(n-1); i++){
                if (arr[i]<=arr[i+1]){
                    continue;
                }
                else{
                    ans = false;
                    break;
                }
            }
            if(ans) cout << "YES\n";
            else cout << "NO\n";
        }
    }
}