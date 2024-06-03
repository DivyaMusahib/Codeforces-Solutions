#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int arr[n];
        for(int i=0; i<n; i++) cin >> arr[i];

        bool ans = false;
        int a,b,c;
        for(int i=1; i<n-1; i++){
            if(arr[i]>arr[i-1] && arr[i]>arr[i+1]){
                ans = true;
                a = i, b = i+1 , c = i+2;
                break;
            }
        }
        if(ans){
            cout << "YES\n";
            cout << a << " " << b << " " << c << "\n";
        }
        else cout << "NO\n";
    }
}