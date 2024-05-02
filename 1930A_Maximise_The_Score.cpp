#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        vector<long long>arr(2*n);

        for(int i=0; i< (2*n); i++){
            cin >> arr[i];
        }

        sort(arr.begin(),arr.end());
        long long sum =0;

        for(int i=0; i< (2*n); i+=2){
            sum += arr[i];
        }

        cout << sum <<"\n";

    }
}