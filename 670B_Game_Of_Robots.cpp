#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    cin >>n >>k;

    // one based indexing
    vector<int>arr(n+1);
    for(int i=1; i<=n; i++) cin >> arr[i];

    for(int i=1; i<=n; i++){
        if((k-i)>0){
            k = k-i;
        }
        else{
            cout << arr[k];
            break;
        }
    }

    // zero based indexing
    // vector<int>arr(n);
    // for(int i=0; i<n; i++) cin >> arr[i];

    // for(int i=1; i<=n; i++){
    //     if((k-i)>0){
    //         k = k-i;
    //     }
    //     else{
    //         cout << arr[k-1];
    //         break;
    //     }
    // }


}