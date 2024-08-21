#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<long long>arr(n);
    map<long long,long long>mp;
    for(int i=0; i<n; i++){
        cin >> arr[i];
        mp[arr[i]]++;
    }
    sort(arr.begin(),arr.end());
    cout << arr[n-1] - arr[0] << " ";
    if(arr[n-1]==arr[0]) cout << ((mp[arr[n-1]]-1)*(mp[arr[0]])*1ll)/2;
    else cout << mp[arr[n-1]]*mp[arr[0]]*1ll;
}