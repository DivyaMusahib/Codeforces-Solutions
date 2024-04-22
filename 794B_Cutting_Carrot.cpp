#include<bits/stdc++.h>
using namespace std;

int main(){
    double n,h;
    cin >> n >> h;

    double ans = double(h)/ double(sqrt(n));
    for(int i=1; i<n; i++){
        cout << fixed << setprecision(8) << ans*sqrt(i) << " ";
    }
}