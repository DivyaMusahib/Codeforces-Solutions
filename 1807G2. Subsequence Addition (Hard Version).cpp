#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;


void solve(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }
    sort(arr,arr+n);
    long long sum = 1;
    if(arr[0]!=1){
        cout << "NO\n";
        return ;
    }
    for(int i = 1; i<n; i++) {
        if(arr[i] > sum) {
            cout << "NO\n";
            return ;
        }
        sum += arr[i];
    }
    cout << "YES\n";
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t; while(t--)
        solve();
        
}