#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    for(int i=0; i<t; i++){
        int n;
        cin >> n;

        vector<int>arr(n);

        for(int j=0; j<n; j++){
            cin >> arr[j];
        }

        sort(arr.begin(), arr.end());

        cout << 2*(arr[n-1]+arr[n-2]-arr[0]-arr[1]) << "\n";


    }    

    return 0;
}