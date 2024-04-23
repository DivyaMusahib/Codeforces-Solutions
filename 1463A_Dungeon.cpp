#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        long long a,b,c;
        cin >>a>>b>>c;
        
        if((a+b+c)%9==0 && min({a,b,c})>=((a+b+c)/9)){
            cout << "YES\n";
        }
        else cout << "NO\n";
    }
}