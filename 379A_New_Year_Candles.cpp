#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b;
    cin >> a >> b;

    int ans = a;
    int temp = 0;
    int next =ans;

    for(int i=0; ;i++){
        temp = ans;
        ans = ans + next/b;
        if((next/b)==0) break;
        else next = ans - temp + temp%b;
    }

    cout << ans;
    
}