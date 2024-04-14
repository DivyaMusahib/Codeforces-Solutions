#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    cin >> n;
    long long sum =0;

    vector<int>arr1(n);
    vector<int>arr2;

    for(int i=0; i<n; i++){
        cin >> arr1[i];
        sum += arr1[i];
        arr2.push_back(sum);
    }
    
    int k;
    cin >> k;
    
    for(int j=0; j<k; j++){
        int x;
        cin >> x;

        int ans = lower_bound(arr2.begin(),arr2.end(),x) - arr2.begin();
        cout << ans + 1<< endl;
    }

}