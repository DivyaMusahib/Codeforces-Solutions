#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int>arr(n);
    long mini = 1000000001;
    int ans=0;
    for(int i=0; i<n; i++){
        cin >> arr[i];
        if(arr[i]<mini){
            mini = arr[i];
            ans = i+1;
        }
    }
    // cout << mini;
    int count =0;
    for(int j=0;j<n; j++){
        if(arr[j]==mini) count++;
    }

    if(count==1) cout << ans;
    else cout << "Still Rozdil";
}