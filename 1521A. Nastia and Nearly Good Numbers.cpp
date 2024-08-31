#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;

void solve(){
    long long a, b;
	cin >> a >> b;
	if (b == 1){
		cout << "NO" << endl;
	}
	else if (b == 2){
		cout << "YES" << endl;
		cout << a << " " << a * 3 << " " << 4 * a << endl;
	}
	else{
		cout << "YES" << endl;
		cout << a  << " " << a * (b - 1) << " " << a * b << endl;
	}
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t; while(t--)
        solve();
        
}