#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;

void solve(){
    ll a, b, c;
	cin >> a >> b >> c;

	ll n = 2 * abs(a - b);
	if (a > n || b > n || c > n) cout << -1 << '\n';
	else {
		ll d = n / 2 + c;
		while (d > n) d -= n;
		cout << d << '\n';
	}
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t; while(t--)
        solve();
        
}