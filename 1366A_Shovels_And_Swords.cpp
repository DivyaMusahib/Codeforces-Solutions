#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        long long a,b;
        cin >> a >> b;
        long long ans = min({a,b,(a+b)/3});
        cout << ans << "\n";
    }
}