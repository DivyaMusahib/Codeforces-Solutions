#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define yes cout << "YES";
#define no cout << "NO";

void solve() {
    int n; cin >>n;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i%2==0){
                if(j%2==0) cout << 'W';
                else cout << 'B';
            }
            else if(i%2==1){
                if(j%2==0) cout << 'B';
                else cout << 'W';
            }
        }
        cout << "\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif

    // int t; cin >> t; while (t--)
        solve();
}