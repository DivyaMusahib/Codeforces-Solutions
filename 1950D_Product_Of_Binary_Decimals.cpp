#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    int iter = 5;
    while(iter--){
        if(n % 11111 == 0) n /= 11111;
        else if(n % 11110 == 0) n/= 11110;
        else if(n % 11101 == 0) n/= 11101;
        else if(n % 11100 == 0) n/= 11100;
        else if(n % 11011 == 0) n/= 11011;
        else if(n % 11010 == 0) n/= 11010;
        else if(n % 11001 == 0) n/= 11001;
        else if(n % 11000 == 0) n/= 11000;
        else if(n % 10111 == 0) n/= 10111;
        else if(n % 10110 == 0) n/= 10110;
        else if(n % 10101 == 0) n/= 10101;
        else if(n % 10100 == 0) n/= 10100;
        else if(n % 10011 == 0) n/= 10011;
        else if(n % 10010 == 0) n/= 10010;
        else if(n % 10001 == 0) n/= 10001;
        else if(n % 10000 == 0) n/= 10000;
        else if(n % 1111 == 0) n/= 1111;
        else if(n % 1110 == 0) n/= 1110;
        else if(n % 1101 == 0) n/= 1101;
        else if(n % 1100 == 0) n/= 1100;
        else if(n % 1011 == 0) n/= 1011;
        else if(n % 1010 == 0) n/= 1010;
        else if(n % 1001 == 0) n/= 1001;
        else if(n % 1000 == 0) n/= 1000;
        else if(n % 111 == 0) n/= 111;
        else if(n % 110 == 0) n/= 110;
        else if(n % 101 == 0) n/= 101;
        else if(n % 100 == 0) n/= 100;
        else if(n % 11 == 0) n/= 11;
        else if(n % 10 == 0) n/= 10;
    }

    if(n==1) cout << "YES";
    else cout << "NO";
    
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    #ifndef ONLINE_JUDGE 
    freopen("input.txt", "r", stdin); 
    freopen("output.txt", "w", stdout); 
    #endif 

    int t;
    cin >> t;
    while (t--) {
        solve();
        cout << "\n";
    }
}
