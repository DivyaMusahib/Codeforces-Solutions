#include<bits/stdc++.h>
using namespace std;

int main(){
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int x;
    cin >> x;
    int a,b;
    cin >> a >> b;
    if(a==x){
        x = b;
    }
    else if(b==x){
        x = a;
    }
    int a2,b2;
    cin >> a2 >> b2;
    if(a2==x){
        x = b2;
    }
    else if(b2==x){
        x = a2;
    }
    int a3,b3;
    cin >> a3 >> b3;
    if(a3==x){
        x = b3;
    }
    else if(b3==x){
        x = a3;
    }
    cout << x ;
}