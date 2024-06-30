#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define yes cout << "YES";
#define no cout << "NO";

void solve() {
    int n;
    cin >> n;
    vector<pair<int,int>>a(n),b(n), c(n);
    for(int i=0; i<n; i++){
        cin >> a[i].first ;
        a[i].second = i;
    }
    for(int i=0; i<n; i++){
        cin >> b[i].first ;
        b[i].second = i;
    }
    for(int i=0; i<n; i++){
        cin >> c[i].first ;
        c[i].second = i;
    }
    sort(a.rbegin(),a.rbegin());
    sort(b.rbegin(),b.rbegin());
    sort(c.rbegin(),c.rbegin());

    ll ans =0;

    if(a[0].first > b[0].first && a[0].){

    }

}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif

    int t;
    cin >> t;
    while (t--) {
        solve();
        cout << "\n";
    }
}