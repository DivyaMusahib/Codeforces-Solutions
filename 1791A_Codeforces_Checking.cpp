#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    for(int i=0; i<t; i++){
        char c;
        cin >> c;

        if(c=='c' || c=='o' || c=='d' || c=='e' || c=='f' || c=='r' || c=='s' ) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}