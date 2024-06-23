#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n,m;
        cin >> n >> m;

        vector<vector<int>>arr(n);

        for(int i=0; i<n; i++){
            int x;
            cin >> x;
            arr[i].emplace_back(x);
        }

        for(int i =0; i<n; i++){
            sort(arr[i].rbegin(),arr[i].rend());
        }

        long long ans = 0;
        for(int i=0; i<n; i++){
            int temp = 0;
            int temp2 = n-1;
            for(int j=0; j<)
        }
    }
}