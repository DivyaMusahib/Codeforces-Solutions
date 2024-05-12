#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    vector<pair<long long,long long>>arr(n);
    for(int i=0; i<n; i++){
        cin  >> arr[i].first >> arr[i].second;
    }

    sort(arr.begin(),arr.end());

    vector<long long>prefixmax(n);

    prefixmax[0] = min(arr[0].first,arr[0].second);
    for(int i=1; i<n; i++){
        if(arr[i].second < prefixmax[i-1]){
            prefixmax[i]=arr[i].first;
        }
        else{
            prefixmax[i] = arr[i].second;
        }
    }

    cout << prefixmax[n-1];
}