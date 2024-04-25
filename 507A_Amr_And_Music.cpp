#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    cin >> n >> k;

    vector<pair<int,int>>arr(n);
    for(int i=0;i<n; i++){
        cin >> arr[i].first;
        arr[i].second= i+1;
    }

    sort(arr.begin(),arr.end());
    int count =0;
    int numberOfInstruments=0;
    for(int i=0; i<n;i++){
        count += arr[i].first;
        if(count<=k){
            numberOfInstruments++; 
        }
        else{
            break;
        }
    }

    cout << numberOfInstruments << "\n";
    for(int i=0; i<numberOfInstruments; i++){
        cout << arr[i].second << " ";
    }
}