#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    int tMax; cin >> tMax;

    vector<int>timeReq(n);
    for(int i=0; i<n; i++){
        cin >> timeReq[i];
    }

    int sum=0, ans=0, j=0;
    for(int i=0; i<n; i++){
        while(j<n && (sum + timeReq[j])<= tMax){
            sum += timeReq[j];
            j++;
        }
        ans = max(ans, j-i);
        sum -= timeReq[i]; // slide window
    }
    cout << ans;

}