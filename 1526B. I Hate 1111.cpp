#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t;
    cin >> t;
    while(t--) {
        bool ans = true;
        int n; cin >> n;
        // 11 , 111, 1111 = 11*101 , 11111 = 111*100 + 11 , 111111 = 11*10101
        while(n%11) {
            n = n - 111;
            if( n <0 ) {
                ans = false;
                break;
            }
        }
        if(ans) cout << "YES\n";
        else cout << "NO\n";
    }
}