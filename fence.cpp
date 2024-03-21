#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    cin >> n >> k;

    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    int min = k*100;
    int ans=0;

    // vector<int>temp;

    for(int j=0; j<=n-k; j++){
        int sum = 0;
        for(int x=j ; x<j+k; x++){
            sum = sum + arr[x];
        }

        if(sum<=min){
            min = sum;
            ans = j + 1;
        }
    }

    cout << ans ;
}