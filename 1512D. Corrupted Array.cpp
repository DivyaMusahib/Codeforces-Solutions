#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;


void solve(){
    ll n; cin >> n;
    ll totalSum = 0;
    vector<ll>arr(n+2);
    for(int i=0;i<n+2; i++){
        cin >> arr[i];
        totalSum += arr[i];
    }
    sort(arr.begin(),arr.end());
    // for(auto it :arr){
    //     cout << it << " ";
    // }
    // cout << "\n";
    // cout << "total" <<totalSum << "\n";
    if(totalSum-arr[n+1] == 2*arr[n]){
        for(int i=0; i<n; i++) {
            cout << arr[i] << " ";
        }
    } else {
        ll temp = totalSum - arr[n+1];
        bool found = false;
        int ind = -1;
        for(int i=0; i<n+1; i++) {
            if(arr[i] == temp - arr[n+1] && found==false) {
                ind = i;
                found = true;
            }
        }
        if(found == true){
            for(int i=0; i<n+1; i++){
                if(i!=ind){
                    cout << arr[i]<< " ";
                }
            }
        } else {
            cout << -1;
        }
    }
    cout << "\n";
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t; while(t--)
        solve();       
}

