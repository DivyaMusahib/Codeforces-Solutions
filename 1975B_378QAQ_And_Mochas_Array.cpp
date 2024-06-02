#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        int arr[n];
        for(int i=0; i<n; i++) cin >> arr[i];
        sort(arr,arr+n);
        if(arr[0]==1) cout << "YES\n";
        else{
            int first = arr[0];
            int second = arr[0];
            for(int i=0; i<n; i++){
                if( arr[i] % first == 0  || arr[i]%second == 0){
                    continue;
                }
                else{
                    second = arr[i];
                    break;
                }
            }
            
            if(second==arr[0]) cout << "YES\n";
            else{
                bool ans = true;
                for(int i=0; i<n; i++){
                    if( arr[i] % first == 0  || arr[i]%second == 0){
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
}