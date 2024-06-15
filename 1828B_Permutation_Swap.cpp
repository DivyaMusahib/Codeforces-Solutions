#include <bits/stdc++.h>
using namespace std;
int x;
 
int main(){
    int t;
    cin >> t;
    while (t--){
    	int n, ans = 0;
    	cin >> n;
    	for (int i = 1; i <= n; i++) {
            cin >> x;
    		ans = __gcd(ans, abs(x - i));
    	}
    	cout << ans << "\n";
    } 
}