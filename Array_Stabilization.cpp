#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    cin >> n;

    long long max = LONG_LONG_MIN;
    long long min = LONG_LONG_MAX;
    long long temp;

    vector<long long>arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
        if(arr[i]<min) min = arr[i];
        if(arr[i]>max){
            max = arr[i];
            temp = i;
        }
    }

    arr.erase(arr.begin() + temp);
    long long max2 = LONG_LONG_MIN;
    long long min2 = LONG_LONG_MAX;

    for(int i=0; i<(n-1); i++){
        if(arr[i]<min2) min2 = arr[i];
        if(arr[i]>max2) max2 = arr[i];
    }

    cout << max2 - min2;
}