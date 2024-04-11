#include<bits/stdc++.h>
using namespace std;

int main(){
    long long a,b,c,d,e;
    cin >> a >> b >> c >> d >> e;
    long long total = a + b + c + d + e;

    if(total>0 && total%5 == 0) cout << total / 5;
    else cout << -1; 
}