#include<bits/stdc++.h>
using namespace std;

int main(){
    // int a = 'a';
    // int b = 'A';
    // int c = 'z';
    // int d = 'Z';

    // cout << a << "\n";
    // cout << b << "\n";
    // cout << c << "\n";
    // cout << d << "\n";

    string s;
    cin >> s;

    for(int i=0; i<s.length(); i++){
        if(i ==0 && (int)s[i] >=97)          s[i] = (char)((int)s[i] -32);
        else if(i!=0 && (int)s[i] <= 90)     s[i] = (char)((int)s[i] +32);
    }


    cout << s;

    return 0;
}