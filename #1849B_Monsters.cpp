#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int t;
    cin >> t;

    while(t--){
        ll n,k;
        cin >> n >> k;

        vector<pair<int,int>>arr(n);

        for(int i=0; i<n; i++){
        cin >> arr[i].first;
        if(arr[i].first%k ==0 ) arr[i].first=0;
        else arr[i].first = k - arr[i].first%k;
        arr[i].second = i+1;
        }

        sort(arr.begin(),arr.end());

        for(int i=0; i<n; i++){
            cout << arr[i].second << " ";
        }
        cout << "\n";
    }
}