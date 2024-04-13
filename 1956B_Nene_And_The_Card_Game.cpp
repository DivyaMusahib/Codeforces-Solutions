#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    // freopen("output.txt", "w", stdout);

    while(t--){
        int n;
        cin >> n;
        vector<int>arr(n);

        for(int i=0; i<n; i++){
            cin >> arr[i];
        }
        sort(arr.begin(),arr.end());

        int count =0;

        for(int i=0; i<n-1; i++){
            if(arr[i]==arr[i+1]) count++;
        }

        cout << count<< endl;  
    }
}