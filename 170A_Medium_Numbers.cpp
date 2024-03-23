#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    for(int i=0; i<t; i++){
        int a,b,c;
        cin >> a >> b >> c;
        int maxi,mini;

        if(a>b && a>c) maxi=a;
        else if(b>a && b>c) maxi = b;
        else if(c>a && c>b) maxi = c;

        if(a<b && a<c) mini=a;
        else if(b<a && b<c) mini = b;
        else if(c<a && c<b) mini = c;

        cout << a+b+c-maxi-mini << "\n";
    }

    return 0;
}