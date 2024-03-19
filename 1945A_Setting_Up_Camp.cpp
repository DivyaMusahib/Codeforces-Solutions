#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin >> t;
 
 
    for(int i=0; i<t; i++){
        long long a,b,c;
        cin >> a >> b >> c;
        // int ans = a;
 
        if(b%3==0){cout << a + b/3 + (long long)ceil((c)/3.0) << "\n";}
        else if((b-1)%3==0){
            if(c<2) cout << "-1\n";
            else cout << a + (long long)ceil((b+c)/3.0) << "\n";
        }
        else if((b-2)%3==0){
            if(c<1) cout << "-1\n";
            else cout << a + (long long)ceil((b+c)/3.0) << "\n";
        }
 
        // cout << "\n";
    }
 
    return 0;
 
}