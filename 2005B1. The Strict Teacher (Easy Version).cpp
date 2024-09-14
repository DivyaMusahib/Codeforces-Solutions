#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;

void solve(){
    int n,m,q;
    cin >> n >> m >> q;
    int a , b;
    cin >> a >> b;
    int p; cin >> p;

    if(p<min(a,b)) cout << min(a,b) - 1 << "\n";
    else if (p>max(a,b)) cout << n - max(a,b) << "\n";
    else{
        int ans = 0;
        if(a>b) swap(a,b);
        ans = (b-a)/2;
        cout << ans << "\n";
    }
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t; while(t--)
        solve();
        
}