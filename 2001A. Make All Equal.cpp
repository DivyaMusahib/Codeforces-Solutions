#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;


void solve(){
    vector<int>arr(105,0);
    int n; cin >> n;
    for(int i=0; i<n; i++){
        int x;
        cin >> x;
        arr[x]++;
    }
    cout << n - *max_element(arr.begin(),arr.end()) << "\n";
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t; while(t--)
        solve();
        
}