#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >>n ;

    vector<int>arr(n);

    for(int i=0; i<n;i++){
        cin >> arr[i];
    }

    sort(arr.begin(),arr.end());

    long long ans1 = arr[n-1] - arr[0];
    long long ans2 = arr[n-1] - arr[1];
    long long ans3 = arr[n-2] - arr[0];

    long long ans = min({ans1,ans2,ans3});
    cout << ans;
}