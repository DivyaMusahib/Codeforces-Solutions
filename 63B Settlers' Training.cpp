#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    cin >> n >> k;
    vector<int>arr(n);
    for(int i=0; i<n; i++) cin >> arr[i];
    sort(arr.begin(),arr.end());
    for(int j=arr.size()-1; j>=0; j--){
        if(arr[j]>=k) n--;
    }
    int count = 0;
    while(n>0){
        for(int i=0; i<n-1; i++){
            if(arr[i]!=arr[i+1]){
                arr[i]++;
            }
            if(arr[i]>=k) n--;
        }
        count++;
        arr[n-1]++;
        if((arr[n-1]>=k)){
            n--;
        }
    }

    cout << count;
}