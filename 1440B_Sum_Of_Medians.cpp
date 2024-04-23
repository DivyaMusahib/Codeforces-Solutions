#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n,k;
        cin >> n>> k;

        vector<long long>arr(n*k);
        for(int i=0; i<n*k; i++){
            cin >> arr[i];
        }

        long long sum =0;
        for(int j =k*((n-1)/2); j<n*k; j=j+((n/2))+1){
            sum += arr[j];
        }

        cout << sum << "\n";
    }
}