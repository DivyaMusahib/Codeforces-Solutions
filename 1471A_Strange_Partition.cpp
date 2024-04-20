#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >>t;

    while(t--){
        int n,x;
        cin >> n >> x;
        long long sum1 =0;
        long long sum2 =0;

        vector<int>arr(n);

        for(int i=0; i<n; i++){
            cin >> arr[i];
            sum1 += arr[i];
            sum2 += (long long)ceil((double)arr[i]/x);
        }

        sum1 = (long long)ceil((double )sum1/x);

        cout << sum1 << " " << sum2 << "\n";


    }
}