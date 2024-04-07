#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n,k;
    cin >> n >> k;
    long long max_joy = LLONG_MIN;

    vector<pair<long long,long long>>arr(n);
    for(int i=0; i<n ; i++){
        long long joy;
        cin >> arr[i].first >> arr[i].second;

        if(arr[i].second>k) joy = arr[i].first - arr[i].second + k;
        else joy = arr[i].first;

        if(joy>max_joy) max_joy= joy;
    }
    cout << max_joy;
}