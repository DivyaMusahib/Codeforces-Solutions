#include<bits/stdc++.h>
using namespace std;

typedef long long ll; 
typedef vector<ll> v64; 
typedef vector<int> v32; 
#define loop(i, a, b) for(ll i = a; i < b; i++)
#define all(x) (x).begin(), (x).end() 

void solve(){
    int n,m;
    cin >> n >> m;
    if(n==m){
        cout << "YES\n";
    }
    else if(n>m){
        if((n-m)%2 == 0) cout << "YES\n";
        else cout << "NO\n";
    }
    else cout << "NO\n";

}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    #ifndef ONLINE_JUDGE 
    freopen("input.txt", "r", stdin); 
    freopen("output.txt", "w", stdout); 
    #endif

    int t;
    cin >> t;

    while(t--){
        solve();
        // cout << "\n";
    }
    

}