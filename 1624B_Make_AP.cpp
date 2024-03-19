#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin >> t;
 
    for(int i=0; i<t; i++){
        int a, b, c;
        cin >> a >> b >> c;
        int x = 2*b - a - c;
        // 2b - a = m*c
        // 2b - c = m*a
        // a + c = m*(2b)
 
        if((2*b - a) % c ==0 && (2*b - a)>0) cout << "YES\n";
        else if((2*b - c) % a ==0 && (2*b - c)>0) cout << "YES\n";
        else if((a + c) % (2*b) ==0) cout << "YES\n";
 
        else cout << "NO\n";
 
    }
 
    return 0;
}