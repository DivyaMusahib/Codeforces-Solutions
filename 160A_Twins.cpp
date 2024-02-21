#include<bits/stdc++.h>
using namespace std;

int main(){

    int n; // n = number of coins
    cin >> n;

    vector<int>arr(n);
    int totalsum =0;
    for(int i=0; i<n; i++){
        cin >> arr[i];
        totalsum = totalsum + arr[i];
    }

    sort(arr.begin(), arr.end());
    reverse(arr.begin(),arr.end());

    int twin1 = 0;
    int count =0;

    for(int j=0; j<n; j++){
        count++;
        twin1 = twin1 + arr[j];
        if(twin1 > totalsum-twin1) break;

    }

    cout << count << "\n";

    return 0;
}