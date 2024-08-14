#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;


void solve(){
    int n;
    cin >> n;
    vector<int>arr(n+2,-1);
    bool ans = true;
    for(int i=1; i<=n; i++){
        int x ;
        cin >> x;
        arr[x]=1;
        if(i!=1) {
            if(arr[x-1]==-1 && arr[x+1]==-1) ans = false;                        
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