#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    for(int i=0; i<t; i++){
        int n;
        cin >> n;
        int a = n / 10;
        int b = n % 10;
        int ans;
        if(n >= 10) ans = a * ((9)*(9+1))/2 + ((b+1)*(b+2))/2;
        else ans = ((n)*(n+1))/2;
        cout << "ans is" << ans <<endl;
    }
}