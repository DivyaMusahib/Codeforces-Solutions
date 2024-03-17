#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >>t;

    for(int i=0; i<t; i++){
            int x,k;
            cin >> x >> k;

            // if(n%2==0 && x%2!=0 && n%x!=0) cout << 1 << " " << n;
            // else if(n%2==0 && x%2!=0 && n%x==0) cout <<

            if(x%k!=0){
                cout << 1 << "\n" << x << "\n";
            }
            else if(x%k==0){
                cout << 2 << "\n" << 1 << " " << x-1 << "\n";
            }
    }


}