#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        long long n,x;
        cin >> n >> x;

        vector<long long>arr(n);

        for(int i=0; i<n; i++){
            cin >> arr[i];
        }

        long long x1 = arr[0]-x;
        long long x2 = arr[0]+x;
        int count =0;

        for(int i=1; i<n; i++){
            int temp_x1 = arr[i] - x;
            int temp_x2 = arr[i] + x;

            if(temp_x1 > x2 || temp_x2<x1){
                count++;
                x1 = temp_x1;
                x2 = temp_x2;
            }
            else if(temp_x1 > x1) x1 = temp_x1;
            else if(temp_x2 < x2) x2 = temp_x2;

        }

        cout << count << "\n";

    }

}