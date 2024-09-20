#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;

void solve(){
    int n;
    cin >> n;
    vector<ll>arr(n+1);
    map<ll,ll>mp;
    bool ans = false;
    arr[0] = 0;
    mp[0]++;
    for(int i=1; i<=n; i++) {
        int x ; cin >> x;
        if(i%2==0) x = -x;
        arr[i] = x + arr[i-1];
        if(ans == false){
            if(mp.find(arr[i])!=mp.end()) ans = true;
            else mp[arr[i]]++;
        } else {
            continue;
        }
    }
    if(ans) cout << "YES\n";
    else cout << "NO\n";
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t; while(t--)
        solve();
        
}