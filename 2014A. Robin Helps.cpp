#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;

void solve(){
    int n,k;
    cin >> n >> k;
    vector<int>arr(n);
    int has = 0;
    int ans = 0;
    for(int i=0; i<n; i++){
        cin >> arr[i];
        if(arr[i]>=k) has+= arr[i];
        else if (arr[i]==0 && has>0){
            has--;
            ans++;
        }
    }
    cout << ans << "\n";
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t; while(t--)
        solve();
        
}