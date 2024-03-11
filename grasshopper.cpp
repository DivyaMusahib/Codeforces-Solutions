#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >>t;

    for(int i=0; i<t; i++){
            int n,x;
            cin >> n >> x;

            if(n%2==0 && x%2!=0 && n%x!=0) cout << 1 << " " << n;
            else if(n%2==0 && x%2!=0 && n%x==0) cout <<
    }


}