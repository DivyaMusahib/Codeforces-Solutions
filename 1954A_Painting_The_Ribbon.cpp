
#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin >> t;
 
    while(t--){
        int n,m,k;
        cin >> n >> m >>k ;
        int x ;
        if(n%m==0) x= n/m;
        else x = n/m + 1;
        int temp = n-x;
 
        if(temp>k) cout <<"YES\n";
        else cout << "NO\n";
 
    }
}