#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
    int n,q;
    cin >> n >> q;
    long long sum=0;
    vector<long long>arr(n);
    vector<long long>arr_sum;

    for(int i=0; i<n; i++){
        cin >> arr[i];
        sum += arr[i];
        arr_sum.push_back(sum);
    }

    while(q--){
       long l,r,k;
       cin >> l >> r >> k;
       int x= r-l+1;
       long y = x*k;
       long long ans=0;

       if(l>1){
        ans = arr_sum[l-2] + y + arr_sum[n-1] - arr_sum[r-1];
       } 
       else{
        ans = y + arr_sum[n-1] - arr_sum[r-1];
       }
        if(ans%2!=0) cout <<"YES" << endl;
        else cout << "NO\n";
    }
    }
}