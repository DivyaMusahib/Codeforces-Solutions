#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        long long n,k,x;
        cin >> n >> k >> x;

        long long mini = ((k)*(k+1))/2;
        long long maxi = ((n)*(n+1))/2 - ((n-k)*(n+1-k))/2;

        if(x>=mini && x<=maxi) cout << "YES\n";
        else cout << "NO\n";

    }

    return 0;
}