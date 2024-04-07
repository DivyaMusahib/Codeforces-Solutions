#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a1=0,a2=0,a3=0,a4=0,a5=0,a6=0,a7=0;

    for(int i=0; i<n; i++){
        string s;
        cin >> s;

        a1 += (int)s[0]-48;
        a2 += (int)s[1]-48;
        a3 += (int)s[2]-48;
        a4 += (int)s[3]-48;
        a5 += (int)s[4]-48;
        a6 += (int)s[5]-48;
        a7 += (int)s[6]-48;
    }

    // cout << a1 << a2 << a3 << a4 <<a5 << a6 << a7 << endl;

    int max = a1;
    if(a2>max) max = a2;
    if(a3>max) max = a3;
    if(a4>max) max = a4;
    if(a5>max) max = a5;
    if(a6>max) max = a6;
    if(a7>max) max = a7;
    cout << max;
}