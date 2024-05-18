#include <bits/stdc++.h>
using namespace std;

void solve() {
    int a, b, c;
    cin >> a >> b >> c;
    int count = 0;
    int sum = a +b +c;

    if( (sum) % 2 != 0) count = -1;
    else{
       count = min(sum/2, (a+b)/2);
    }

    cout << count;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

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
