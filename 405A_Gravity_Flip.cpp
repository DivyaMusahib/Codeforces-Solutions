#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    vector<int>arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    sort(arr.begin(),arr.end());
    for(int j=0; j<n; j++){
        cout << arr[j] << " ";
    }

    return 0;
}