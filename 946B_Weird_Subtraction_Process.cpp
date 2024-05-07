#include<bits/stdc++.h>
using namespace std;

int main(){
    long long a, b;
    cin >> a >> b;
    bool ans = true;
    while(ans){
        if(a==0 || b==0) ans = false;
        // euclidean algo => use of modulo instead of sub=> gcd
        else if(a>= (2*b)) a = a % (2*b);
        else if(b>= (2*a)) b = b % (2*a);
        else ans = false;
    }

    cout << a << " " << b;
}