#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>arr(4);
    cin >> arr[0] >> arr[1] >> arr[2] >> arr[3];
    int count =0;
    sort(arr.begin(),arr.end());
    for(int i=0; i<4; i++){
        if(arr[i]!=arr[i+1]) count++;
    }
    cout << 4 - count;  
}