#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    for(int i=0; i<t; i++){
        int a,b,c,ans;
        cin >> a >> b >> c;

        if(a==b) ans = c;
        else if( b==c) ans = a;
        else ans = b;

        cout << ans <<"\n";

    }

    return 0;
}