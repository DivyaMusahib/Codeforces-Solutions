#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c;
    cin >> a >> b >> c;
    // c = ax + by
    // c - ax = by
    bool ans = false;
    for(int x=0; x<=10000; x++){
        if((c-x*a)>=0 && ((c-x*a)%b == 0)){
            cout << "YES";
            ans = true;
            break;
        }
        if(c-x*a<0) break;
    }

    if(ans == false) cout << "NO";
}