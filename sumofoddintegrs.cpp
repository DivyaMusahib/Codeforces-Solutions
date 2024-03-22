#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n,k;
        cin >> n >> k;

        //logic
        // sum of even times odd integer is always even
        // sum of odd times odd integer is always odd
        if((n%2==0 && k%2==0) || (n%2!=0 && k%2!=0)) cout << "YES\n";
        else cout << "NO\n";
    }

    return 0;
}