#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        
        vector<pair<int,int>>arr(n);
        for(int i=0; i<n; i++){
            int m;
            cin >> m;
            vector<long long>arr_m(m);
            for(int j= 0 ; j<m; j++) cin >> arr_m[j];
            sort(arr_m.begin(),arr_m.end());
            arr[i].first = arr_m[1];
            arr[i].second = arr_m[0];
        }

        // for(int i=0; i<n; i++){
        //     cout << arr[i].first << " " << arr[i].second << "\n";
        // }

        sort(arr.begin(),arr.end());
        long long ans =0;
        for(int i=1; i<n; i++) ans += arr[i].first;
        long long mini = INT_MAX;
        for(int i =0; i<n; i++){
            if(mini>arr[i].second){
                mini = arr[i].second;
            }
        }
        ans += mini;

        cout << ans << "\n";

    }
}