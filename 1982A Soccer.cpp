#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
    int a,b;
    cin >> a >>b;
    int c ,d;
    cin >> c >> d;

    int diff1 = a-b;
    int diff2 = c-d;


    if ((diff1 > 0 && diff2 > 0) || (diff1 < 0 && diff2 < 0)) {
        cout << "YES";
    } else {
        cout << "NO";
    }

    // if(b<a && d<=a) cout << "YES";
    // else if(b>d) cout << "YES";
    // else if(b>a) cout << "NO";
    // else cout << "NO";
    // if(d>=a && c>=b) cout << "NO";
    // else cout << "YES";
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