//tle
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> v64;
typedef vector<int> v32;
#define loop(i, a, b) for (ll i = a; i < b; ++i) // Use pre-increment for clarity
#define all(x) (x).begin(), (x).end()

void solve() {
    ll n, t;
    cin >> n >> t;
    ll ans = 0;

    if (n <= (t + 1)) {
        ll k = n + t;
        for (ll i = k; i >= 0; i--) {
            ans |= i;
            if (((i+1) & (i)) == 0) {
                break;
            }
        }
    }
    else {
        for (ll i = n + t; i >= n - t; i--) { // Track iterations
            ans |= i;
            if (((i+1) & (i)) == 0) {
                break;
            }
        }
    }

    cout << ans;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int test;
    cin >> test;

    while (test--) {
        solve();
        cout << "\n";
    }

    return 0;
}


// tle 
// #include<bits/stdc++.h>
// using namespace std;

// typedef long long ll; 
// typedef vector<ll> v64; 
// typedef vector<int> v32; 
// #define loop(i, a, b) for(ll i = a; i < b; i++)
// #define all(x) (x).begin(), (x).end() 

// void solve(){
//     long long n, t;
//     cin >> n >> t;
//     long long ans = 0;

//     if(n <= (t+1)){
//         long long k = n+ t;
//         for (long long i = 0; i <= k; ++i) {
//         ans |= i;
//         }
//         // cout << "if mien aaya tha";
//     }
//     else{
//         long long k = n+ t;
//         for (long long i = n-t; i <= k; ++i) {
//         ans |= i;
//         }
//     }

//     cout << ans ;
            
// }

// int main(){

//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);

//     #ifndef ONLINE_JUDGE 
//     freopen("input.txt", "r", stdin); 
//     freopen("output.txt", "w", stdout); 
//     #endif

//     int test;
//     cin >> test;

//     while(test--){
//         solve();
//         cout << "\n";
//     }
    
// }