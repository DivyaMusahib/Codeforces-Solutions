#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;

    while(t--){
        int n; cin >> n;

        if(n<=0 || n==1 || n==2 || n==4) cout << -1 << "\n";
        else if(n%3==0) cout << n/3 << " 0 0\n";
        else if(n%5==0) cout << "0 " << n/5 << " 0\n";
        else if(n%7==0) cout << "0 0 " << n/7 << "\n";
        else if(n%3==1) cout << (n-7)/3 << " 0 1\n";
        else if(n%3==2) cout << (n-5)/3 << " 1 0\n";
    }
}