// today 16th june 2024 contest i didnt gave with my acc but in contest i solved 2 question // protest week finish


#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n,a,b;
    cin >> n >> a >> b;
    long long k = b - a;
    long long ans = 0;
    k = min({k,n,b});
    // for(int i=1; i<=k; i++){
    //     ans = ans + b- i + 1;
    // }
    ans = k + k*b - ((k)*(k+1)*1LL)/2;
    ans = ans + a*(n-k)*1LL;
    if(a>b) cout << 1LL*a*n ;
    else cout << ans;
    
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    #ifndef ONLINE_JUDGE 
    freopen("input.txt", "r", stdin); 
    freopen("output.txt", "w", stdout); 
    #endif 

    int t;
    cin >> t;
    while (t--) {
        solve();
        cout << "\n";
    }
}
