#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    for(int i=0; i<t; i++){
        int n, k;
        cin >> n >> k;

        if((n%k)%2==0) cout << "YES\n";
        else if(n%2==0)cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}