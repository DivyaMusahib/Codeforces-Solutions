#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>arr(4);
    cin >> arr[0] >> arr[1] >> arr[2] >> arr[3];
    sort(arr.begin(),arr.end());

    if(arr[3]<(arr[2]+arr[1]) || arr[2]<(arr[1]+arr[0])) cout << "TRIANGLE";
    else if(arr[3]==(arr[2]+arr[1]) || arr[2]==(arr[1]+arr[0])) cout << "SEGMENT";
    else cout << "IMPOSSIBLE";    
}