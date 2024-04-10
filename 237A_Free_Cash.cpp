#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    cin >> n;

    vector<pair<int,int>>arr(n);
    int count=1;
    vector<int>countarr;

    for(int i=0; i<n; i++){
        cin >> arr[i].first >> arr[i].second;
        if(i!=0){
            if(arr[i].first != arr[i-1].first){
                countarr.push_back(count);
                count = 1;
            }
            else if(arr[i].first == arr[i-1].first){
                if(arr[i].second != arr[i-1].second){
                countarr.push_back(count);
                count =1;
                }
                else if(arr[i].second == arr[i-1].second) count++;
            }
        }
        if(i==n-1) countarr.push_back(count);

    }
    int maxi = INT_MIN;
    for(int j=0; j<countarr.size(); j++){
        if(countarr[j]> maxi) maxi = countarr[j];
    }

    cout << maxi;
    
}