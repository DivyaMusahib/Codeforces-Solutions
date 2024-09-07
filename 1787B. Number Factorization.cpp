#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;

void solve(){
    ll n; cin >> n;
    vll arr(100001,-1);

    for(int i=2; i*i<=n; i++) {
        ll cnt = 0;
        while(n % i == 0) {
            cnt++;
            n /= i;

            if(arr[cnt] == -1) arr[cnt] = i;
            else arr[cnt] *= i;
        }
    }
    if(arr[1]==-1) arr[1] = n;
    else arr[1] *= n; 

    ll ans = 0;
    for(auto &it : arr) {
        if(it!=-1) ans += it;
    }

    cout << ans << "\n";
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t; while(t--)
        solve();
        
}


// solution seen from shreejith`