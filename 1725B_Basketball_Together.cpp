#include<bits/stdc++.h>
using namespace std;

int main() {

    long long n,k;
    cin>>n>>k;
    vector<long long>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    sort(arr.rbegin(),arr.rend());

    int ans = 0, r = n;
 
    for(int i = 0; i < n; i++) {
        int num = (k / arr[i]) + 1;
 
        if(num > r) break;
        r -= num;
        ans++;
    }
 
    cout << ans << endl;
}