#include<bits/stdc++.h>
using namespace std;

int solve(int n, int arr[]){
    int count =0;
    for(int i=0; i<7; i++){
        n = n - arr[i];  
        if(n<=0){
            count++;
            return i;
            break;
        }
    }
    if(count==0){
        return solve(n,arr);
    }
}

int main(){
    int n; cin >> n;
    int arr[7];
    for(int i=0; i<7; i++){
        cin >> arr[i];
    }

    int ans = solve(n,arr)+1;
    cout << ans;

    return 0;
}