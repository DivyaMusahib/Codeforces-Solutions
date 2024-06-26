#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
    ll x, y, k;
    cin >> x >> y >> k;

    while (k > 0) {

        ll add_steps = y - x % y;
        
        if (add_steps > k) {
            x += k;
            k = 0;
        }else {

            if(x==1){
                k = k % add_steps;
                x = x+k;
                k = 0;
            }

            else{

            x += add_steps;
            k -= add_steps;
            
            // while ( x % y == 0) {
            //     x = x/y;
            // }

            while (x % y == 0) {
                // Divide by y^k where k is the largest integer such that y^k divides x
                int y_power = y;
                while (x % (y_power * y_power) == 0) {
                    y_power *= y_power;
                }
                x /= y_power;
            }

            }

        }
    }

    std::cout << x;

}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    #ifndef ONLINE_JUDGE 
    freopen("input.txt", "r", stdin); 
    freopen("output.txt", "w", stdout); 
    #endif 

    int t;
    cin >> t;
    while (t--) {
        solve();
        std::cout << "\n";
    }

    return 0;
}