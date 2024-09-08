#include <bits/stdc++.h>

using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n, k;
    cin >> n >> k;
    int L = 0, R = 55;
    while (n--) {
      int l, r;
      cin >> l >> r;
      if (l <= k && k <= r)
        L = max(L, l), R = min(R, r);
    }
    cout << (L == R ? "YES\n" : "NO\n");
  }
}

// #include<bits/stdc++.h>
// using namespace std;
// typedef long long ll;
// typedef vector<int> vi;
// typedef vector<ll> vll;

// void solve(){
//     ll n,k;
//     cin >> n >> k;
//     int count = 0;
//     ll temp = n;
//     while(temp--) {
//         int a,b; cin >> a >> b;
//         if(k>=a && k<=b){}
//         else count++;
//     }
//     if(count == n || n==1) {
//         cout << "NO";
//         cout << "\n";
//     } else {
//         cout << "YES";
//         cout << "\n";
//     }
// }

// int main(){
//     ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//     int t; cin >> t; while(t--)
//         solve();
        
// }