#include<bits/stdc++.h>
using namespace std;

long long solve(long long n, int z){
    if(n % (z-1) != 0){
        z *=2;
        return solve(n,z);
    }
    else{
        return (n / (z-1));
    }
}

int main(){
    int t;
    cin >>t;
    while(t--){
        long long n;
        cin >>n;

        // x * (2^k - 1) = n
        int z=4;
        long long ans= solve(n,z);
        cout << ans << "\n";
    }
}