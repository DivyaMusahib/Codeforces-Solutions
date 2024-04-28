#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        vector<long long>arr(n);
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }

        sort(arr.begin(),arr.end());
        long long sum1 = arr[0];
        long long sum2 =arr[n-1];

        bool ans = false;

        for(int i=1, j=n-1; i<=n/2 && j>n/2; i++){
            sum1 += arr[i];
            if(sum1>sum2){
                j--;
                if(j>n/2) sum2 += arr[j];
            }
            if(sum1<sum2 && i>(n-1-j)){
                ans = true;
                break;
            }

            // cout << "sum1 is " << sum1 << " sum2 is " << sum2 << " count1 is" << i <<endl;
        }

        if(ans) cout << "YES\n";
        else cout << "NO\n";
        
    }
}