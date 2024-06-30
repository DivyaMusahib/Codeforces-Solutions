#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define yes cout << "YES";
#define no cout << "NO";

void solve() {
    int a,b,c;
    cin >> a >> b >> c;
    if(c>= min(a,b)){
        cout << min(a,b) << "\n";
    }
    else{
        a = a-c;
        b = b-c;
        int mini = min(a,b);
        cout << c + min((a+b)/3 , min(a,b))<< "\n";
    }

}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif

    int t; cin >> t; while (t--)
        solve();
}