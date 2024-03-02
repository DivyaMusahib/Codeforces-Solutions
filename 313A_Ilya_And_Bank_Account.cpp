#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    if(n>=0) cout << n;

    else if(n<0){
        int a = n/10;
        int b = n/10 - (n%100)/10 + n%10;
        if(a>b) cout << a;
        else cout << b;
    }

    return 0;
}