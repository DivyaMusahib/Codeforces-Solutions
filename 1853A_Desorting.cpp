#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    for(int i=0; i<t; i++){
        int n;
        cin >> n;
        vector<long long>arr(n);

        long long min_diff= INT_MAX;

        for(int j=0; j<n; j++){

            cin >> arr[j];
            if(j!=0){
                if((arr[j]-arr[j-1]) < min_diff) min_diff = arr[j] - arr[j-1]; 
            }
        }

        if(min_diff<0) cout << 0 << "\n";
        else if(min_diff==0) cout << 1 << " \n";
        else if(min_diff>0) cout << (min_diff/2) + 1 << "\n";

    }

    return 0;
}