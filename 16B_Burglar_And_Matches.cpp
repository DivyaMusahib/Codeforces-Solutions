#include<bits/stdc++.h>
using namespace std;

int main(){
    int m,n;
    cin >> m >> n;
    vector<pair<int,int>>arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i].second >> arr[i].first ;
    }

    sort(arr.rbegin(),arr.rend());
    long long ans =0;

    // cout << "\n";
    // for(int i=0; i<n; i++){
    //     cout << arr[i].second << " " << arr[i].first << "\n" ;
    // }

    // cout << "\n";
    for(int i=0; i<n && m>0 ; i++){
        if(arr[i].second <= m){
            ans += arr[i].second*arr[i].first;
            m -= arr[i].second;
        }

        else{
            ans += m*arr[i].first;
            break;
        }

        // cout<< ans << "\n";
    }

    cout << ans ;
}