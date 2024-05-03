#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >>n;
    long long sum=0;
    long long min = INT_MAX;
    vector<long long>arr(n);

    for(int i=0; i<n; i++){
        cin >> arr[i];
        sum += arr[i];

        if((arr[i]%2)!=0 && arr[i]<min) min = arr[i]; 
    }

    if(sum%2 == 0) cout << sum;
    else cout << sum -min;
}