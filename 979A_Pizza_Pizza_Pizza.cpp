#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    cin >> n;

    if((n+1)%2==0) cout << (n+1)/2;
    else if(n+1 == 1) cout << 0;
    else cout << n+1;
}