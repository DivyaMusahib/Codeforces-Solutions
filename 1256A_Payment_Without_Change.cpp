#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int q;
    cin >> q;

    while(q--){
        int a,b,n,s;
        cin >> a >> b >> n >> s;
        // xn + y1 = s
        if (s % n <= b && 1ll * a * n + b >= s) {
			cout << "YES\n";
		}
		else {
			cout << "NO\n";
		}

    }
}