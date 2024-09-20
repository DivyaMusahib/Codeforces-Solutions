#include<bits/stdc++.h>
using namespace std;

int main(){
    int n , a, b;
    cin >> n >> a >> b;
    b = b %n;
    int des = a+b;
    if(des > n) des = des % n;
    else if(des <= 0) des = n + des;
    cout << des;
}