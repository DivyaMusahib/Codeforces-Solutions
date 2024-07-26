#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int n; cin>>n;
    vector<int>arr(n);
    int maxi = -1, sum = 0;

    for(int i=0; i<n; i++){
        cin >> arr[i];
        sum += arr[i];
    }
 
    for (int i=0; i<n; i++){
        for (int j=i; j<n; j++){
            int temp = 0;
            for (int k=i; k<=j; k++){
                temp += arr[k];
            }
            int t =j-i+1;
            int r=(t - temp) - temp;
            maxi = max(maxi , r);
        }
    }

    cout<< sum + maxi;
}