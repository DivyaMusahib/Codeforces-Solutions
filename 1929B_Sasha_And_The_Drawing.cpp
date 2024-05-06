#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>> n >> k;
        
        if(k<=4*(n-1)){
            if(k%2 == 0 ) cout << k/2 << "\n";
            else cout<<(k/2)+1 << "\n";
        }
        else if(k>=(4*n)-3){
            cout<<(k/2)+1 << "\n";
        }
    }
}