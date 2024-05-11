#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n,d;
    cin >> n >> d;
    vector<ll>v(n);
    for(int i=0; i<n; i++) cin >>v[i];
    // vector<ll>arr;

    ll ans =0;
    for(ll i=0; i<n-2; i++){
        // ll j = i+2;
        // while(j<n && abs(v[j]-v[i])<=d){
        //     j++;
        // }
        long long j = upper_bound(v.begin(),v.end(),v[i]+d) - v.begin();
        ll num = ((j-i-1)*(j-i-2)*1LL)/2;
        ans += num;
        // cout << i << " " << j << "\n";
    }

    // for(int i=0; i<arr.size(); i++) ans += arr[i];
    // for(int i=0; i<arr.size(); i++) cout << arr[i] << " ";

    cout << ans ;
}