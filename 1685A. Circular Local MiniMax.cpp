#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;

void solve(){
    ll n; cin >> n;
    vll v(n);
    for(int i=0; i<n; i++) {
        cin >> v[i];
    }
    if(n&1){
        cout << "NO"; cout << "\n";
    } else {
        sort(v.begin(),v.end());
        vll arr(n);
        for(int i=0; i<n/2; i++) {
            arr[2*i] = v[i];
        }
        for(int i=n/2; i<n; i++) {
            arr[2*i - n + 1] = v[i];
        }
        bool ans = true;
        for(int i=0; i<n; i++) {
            if(arr[i] < arr[((i-1)%n + n)%n] && arr[i] < arr[((i+1)%n + n)%n]) continue;
            else if(arr[i] > arr[((i-1)%n + n)%n] && arr[i] > arr[((i+1)%n + n)%n]) continue;
            else {
                ans = false;
                break;
            }
        }
        if(ans){
            cout << "YES";
            cout << "\n";
            for(auto &it : arr) cout << it << " ";
        } else cout << "NO";
        cout << "\n";
    }
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t; while(t--)
        solve(); 
}