#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
    int a,b,c;
    cin >> a >> b >> c;
    int mini = INT_MAX;
    for(int i=1 ;i<=10;i++){
        int temp = abs(a-i) + abs(b-i) + abs(c-i);
        mini = min (mini, temp);
    }
    cout << mini ;

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