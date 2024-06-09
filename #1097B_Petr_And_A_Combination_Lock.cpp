#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    cin >> n;

    long long arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    long long x = pow(2,n);
    bool ans = false;

    for(long long i=0; i<x; i++){
        long long sum = 0;
        for(int j=0; (1<<j) <x ; j++){
            if(i & (1 << j)){
                sum += arr[j];
            }
            else{
                sum -= arr[j];
            }
        }

        if(sum%360 == 0){
            ans = true;
            break;
        }
    }

    if(ans) cout << "YES\n";
    else cout << "NO\n";

}