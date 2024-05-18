#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){

        int arr[3];
        cin >> arr[0] >> arr[1] >> arr[2];
        sort(arr,arr+3);
        int a = arr[0];
        int b = arr[1];
        int c = arr[2];

        if(b%a != 0 || c%a != 0) cout << "NO\n";
        else if((b/a - 1 + c/a -1) <= 3) cout << "YES\n";
        else cout << "NO\n";

    }
}