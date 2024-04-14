#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    vector<int>arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    sort(arr.begin(),arr.end());

    long long d;
    cin >> d;

    for(int i=0; i<d; i++){
        long long x;
        cin >>x;

        long long ans = upper_bound(arr.begin(),arr.end(),x)  - arr.begin();
        cout << ans << endl;
    } 
}