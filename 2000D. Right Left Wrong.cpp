#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;

void solve() {
    ll n;
    cin >> n;
    vector<ll> arr(n + 1, 0);
    for(int i = 1; i <= n; i++) cin >> arr[i];

    vector<ll> prefix = arr;
    for(int i = 2; i <= n; i++) {
        prefix[i] += prefix[i - 1];
    }
    // for(auto it : prefix){
    //     cout << it << " ";
    // }
    vector<char> arr2(n + 1);
    for(int i = 1; i <= n; i++) {
        cin >> arr2[i];
    }

    ll ans = 0;
    int p1 = 1, p2 = n;

    while(p1 < p2) {
        for(int i = p1; i <= n; i++) { 
            if(arr2[p1] != 'L') {
                p1++;
            } else {
                break;
            }
        }
        for(int i = p2; i >= 1; i--) {
            if(arr2[p2] != 'R') {
                p2--;
            } else {
                break;
            }
        }

        if(p1 < p2) {
            ans += prefix[p2] - prefix[p1 - 1];
            p1++;
            p2--;
        } else {
            break;
        }
    }

    cout << ans << "\n";
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t; while(t--)
        solve();
        
}
