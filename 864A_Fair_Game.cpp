#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int>arr(n);

    for(int i=0; i<n;i++){
        cin >> arr[i];
    }

    sort(arr.begin(),arr.end());

    if(arr[0]!= arr[n/2 -1] || arr[(n/2)]!=arr[n-1] || arr[n/2 -1]==arr[(n/2)]) cout << "NO";
    else{
        cout << "YES\n";
        cout << arr[0] << " " << arr[n-1];
    }

}