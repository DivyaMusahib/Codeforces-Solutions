#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n;
    int arr[n];
    for(int i=0; i<n; i++) cin >> arr[i];
    long long ans = arr[0] + 1;
    for(int i=1;i<n; i++){
        if(arr[i]>=arr[i-1]){
            ans = ans + arr[i] - arr[i-1] + 2;
        }
        else{
            // if((arr[i-1] - arr[i] + 1) < arr[i] ){
                ans = ans + arr[i-1] - arr[i] + 2;
            // }
            // else{
            //     ans += arr[i] + 1;
            // }
        }
    }
    cout << ans;
}