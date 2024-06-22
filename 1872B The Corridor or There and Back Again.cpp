#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        
        vector<pair<int,int>>arr(n);

        for(int i=0;i<n; i++) cin >> arr[i].first >> arr[i].second;
        sort(arr.begin(),arr.end());

        int maxi = INT_MAX;

        for(int i=0; i<n; i++){
            if(arr[i].first >= maxi) break;
            else{
                maxi = min((arr[i].second-1)/2 + arr[i].first , maxi);
            }
        }

        cout << maxi << "\n";
    }
}