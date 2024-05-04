#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int x;
        cin >> x;

        int maxi =0;
        int ans =0;

        for(int y=x-1; y>0; y--){
            int check = __gcd(x,y) + y;
            if( check > maxi){
                maxi = check;
                ans = y;
            }
        }

        cout << ans << "\n";
    }
}