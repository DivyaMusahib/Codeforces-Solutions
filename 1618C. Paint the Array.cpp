#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define yes cout << "YES";
#define no cout << "NO";

void solve() {
    int n;
    cin >> n;
    ll arr[n];
    for(int i=0; i<n; i++) cin >> arr[i];
    ll even = arr[0], odd = arr[1];
    for(int i=0; i<n; i++){
        if(i%2){
            odd = __gcd(odd, arr[i]);
        }
        else{
            even = __gcd(even, arr[i]);
        }
    }

    bool evenDivOdd = false;
    bool oddDivEven = false;

    for(int i=0; i<n; i+=2){
        if(arr[i]%odd == 0){
            oddDivEven = true;
            break;
        }
    }

    for(int i=1; i<n; i+=2){
        if(arr[i]%even == 0){
            evenDivOdd = true;
            break;
        }
    }

    if(evenDivOdd == false){
        cout << even << "\n";
    }
    else if(oddDivEven == false){
        cout << odd << "\n";
    }
    else{
        cout << 0 << "\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif

    int t; cin >> t; while (t--)
        solve();
}