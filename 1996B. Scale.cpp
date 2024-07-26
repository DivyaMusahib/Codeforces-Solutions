#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;

void solve(){
    ll n, k;
    cin >> n >> k;
    vector<string>s(n);
    for(int i=0; i<n; i++){
        cin >> s[i];
    }

    vector<vector<ll>> arr(n, vector<ll>(n));
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            arr[i][j] = (int)(s[i][j] - '0');
        }
    }

    vector<vector<ll>> ans(n / k, vector<ll>(n / k));
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if((i + 1) % k == 0 && (j + 1) % k == 0){
                ans[i / k][j / k] = arr[i][j];
            }
        }
    }

    for(int i = 0; i < n / k; i++){
        for(int j = 0; j < n / k; j++){
            cout << ans[i][j];
        }
        cout << "\n";
    }
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; 
    cin >> t; 
    while(t--)
        solve();
}