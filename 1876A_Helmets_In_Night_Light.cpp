#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        long long n,p;
        cin >> n >> p;

        vector<pair<long long,long long>>arr(n);
        for(int i=0; i<n; i++) cin >> arr[i].second;
        for(int i=0; i<n; i++) cin >> arr[i].first;

        sort(arr.begin(),arr.end());

        vector<long long>arr1(n);
        for(int i=0; i<n; i++) arr1[i] = arr[i].first;
        int k = upper_bound(arr1.begin(),arr1.end(),p) - arr1.begin() -1;

        // cout << k << "\n";
        // for(int i=0; i<=k ; i++) cout << arr[i].first << " ";
        // cout << "\n";
        // for(int i=0; i<=k ; i++) cout << arr[i].second << " ";
        // cout << "\n";
        long long ans =0;
        if(n==1){
            ans = p;
            n =0;
        }
        else{
            if(k<0){
                ans += n*p;
                n =0;
            }
            else{
                for(int i=0; i<=k; i++){
                    if(i==0){
                        n= n-1;
                        ans += p;
                    }
                    if((n - arr[i].second)>=0){
                        ans += arr[i].first * arr[i].second;
                        n = n-  arr[i].second;
                    }
                    else{
                        ans += 1LL*(n)*arr[i].first;
                        n =0;
                        break;

                    }
                    // cout << ans << " " <<n << "\n";
                }
                    // cout << ans << " " <<n << "\n";
            }
        }
        if(n>0) ans += 1LL*n*p;

        cout << ans << "\n";

    }
}