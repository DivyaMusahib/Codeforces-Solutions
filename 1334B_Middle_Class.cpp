#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        long long n , k;
        cin >> n >> k;
        vector<long long>arr(n);
        for(int i=0; i<n; i++) cin >> arr[i];
        sort(arr.rbegin(),arr.rend());
        long long sum =0;
        long long ans =0;
        for(int i=0; i<n;i++){
            sum += arr[i];
            if(sum>= k* (i+1)) ans++;
            else break;
        }

        cout << ans << "\n";

    }
}