#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        float a , b ,c;
        cin >> a >> b >> c;
        float temp = (a+b)/2;
        float ans = (temp - min({a,b}))/c;
        cout << ceil(ans) << "\n";
    }
}