#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;


void solve(){
    ll n,x;
    cin >> n >> x;
    vll arr(n);
    for(int i=0; i<n; i++) cin >> arr[i];
    sort(arr.rbegin(),arr.rend());
    ll a=0 , b=0;
    for(int i=0; i<n; i++) {
        if(i%2==0) a+=arr[i];
        else{
            if(arr[i-1]==arr[i]) b+= arr[i];
            else{
                if(arr[i-1]-arr[i]>x){
                    b+= arr[i]+x;
                    x = 0;
                } else {
                    b+= arr[i]+(arr[i-1]-arr[i]);
                    x -= arr[i-1]-arr[i];
                }
            }
        }
    }
    // if(a-b >= x) cout << (a-b-x) << "\n";
    // else cout << 0 << "\n";
    cout << a-b << "\n";
    
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t; while(t--)
        solve();
        
}