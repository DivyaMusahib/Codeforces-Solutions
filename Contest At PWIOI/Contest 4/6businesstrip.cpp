#include<bits/stdc++.h>
using namespace std;

int main(){

    int k; 
    cin >> k;

    vector<int>arr(12);
    for(int i=0; i<12; i++){
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end());
    reverse(arr.begin(),arr.end());

    int count = 0;
    int sum =0;
    for(int j=0; j<12; j++){
        if(sum >= k) break;
        sum =sum + arr[j];
        count++;
        if(sum >= k) break;
    }

    cout << count << "\n";

    return 0;
}