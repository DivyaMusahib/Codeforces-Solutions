#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin >> n >>m;
    int arr[m];
    for(int i=0; i<m; i++) cin >> arr[i];
    sort(arr,arr+m);
    int ans = arr[m-1]-arr[0];
    for(int i=0, j=n-1; (i<=(m-n) && j<m); i++,j++){
        ans = min(ans,arr[j]-arr[i]);
    }
    cout << ans;
}

// just solving this easy question for heat map 27 May 2024 