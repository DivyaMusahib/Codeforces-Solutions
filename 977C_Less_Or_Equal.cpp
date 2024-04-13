#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n,k;
    cin >> n >> k;

    vector<long long>arr(n);

    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    sort(arr.begin(),arr.end());

    if(k>=1){
        if(arr[k-1]==arr[k]) cout << -1;
        else cout << arr[k-1];
    }
    else if(k==0 && arr[0]<=1){
        cout << -1;
    }
    else cout << 1;
    return 0;
}