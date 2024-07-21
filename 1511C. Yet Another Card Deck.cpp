#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,q;
    cin >> n >> q;
    vector<int>arr(51,-1);
    int x;
    for(int i=0; i<n; i++){
        cin >> x;
        if(arr[x]==-1){
            arr[x] = i+1;
        }
    }

    for(int i=0; i<q; i++){
        cin >> x;
        cout << arr[x] << " ";
        for(int j=1; j<=50; j++){
            if(arr[j] < arr[x]) arr[j]++;
        }
        arr[x] = 1;
    }
}