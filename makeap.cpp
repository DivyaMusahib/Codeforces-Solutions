#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    for(int i=0; i<t; i++){
        int a, b, c;
        cin >> a >> b >> c;
        int x = 2*b - a - c;

        if(x==0) cout << "YES\n";
        else if(x<0){
            if(x%2*b==0) cout << "YES\n";
            else cout << "NO\n";
        }
        else if(x>0){
            if(x%a==0 || x%c==0) cout << "YES\n";
            else cout << "NO\n";
        }

    }

    return 0;
}