#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>arr(3);
    cin >> arr[0];
    cin >> arr[1];
    cin >> arr[2];

    sort(arr.begin(),arr.end());

    cout << arr[2] - arr[0] ;
    return 0;
}
