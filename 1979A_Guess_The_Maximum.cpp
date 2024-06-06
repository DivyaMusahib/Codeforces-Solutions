#include<bits/stdc++.h>
using namespace std;

typedef long long ll; 
typedef vector<ll> v64; 
typedef vector<int> v32; 
#define loop(i, a, b) for(ll i = a; i < b; i++)
#define all(x) (x).begin(), (x).end() 

void solve(){
    ll n;
    cin >> n;

    vector<ll>arr;
    int x;
    for(int i=0; i<n; i++){
        cin >>x;
        arr.emplace_back(x);
    }

    ll ans = 1e9;
    for(int i=0; i<(n-1); i++){
        ll temp =max(arr[i],arr[i+1]);
        ans = min(ans,temp);
    }

    cout << ans-1;
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
        cout << "\n";
    }
}