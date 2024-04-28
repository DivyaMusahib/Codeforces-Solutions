#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    int tMax; cin >> tMax;

    vector<int>timeReq(n);
    for(int i=0; i<n; i++){
        cin >> timeReq[i];
    }

    long long maxi =0;
    
    for(int i=0; i<n; i++){
        long long temp =0;
        long long count =0;
        for(int j=i; j<n; j++){
            if((temp + timeReq[j]) <= tMax){
                temp += timeReq[j];
                count++;
            }
            else break;
        }
        if(count>maxi) maxi = count;
    }

    cout << maxi;
}