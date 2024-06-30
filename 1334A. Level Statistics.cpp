#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define yes cout << "YES\n";
#define no cout << "NO\n";

void solve() {
    int n; cin >>n;
    vector<pair<int,int>>arr(n);
    for(int i=0; i<n; i++) cin >> arr[i].first >> arr[i].second;

    bool ans = true;

    if(arr[0].first <arr[0].second) ans = false;
    for(int i = 1; i < n ; i++){
        if(arr[i].first < arr[i-1].first){
            ans = false;
        }
        else if(arr[i].first > arr[i-1].first){
            if(arr[i].second < arr[i-1].second){
                ans = false;
            }
            else if((arr[i].first - arr[i-1].first)< arr[i].second - arr[i-1].second){
                ans = false;
            }
            else if(arr[i].second > arr[i].first){
                ans = false;
            }
        }
        else if(arr[i].first == arr[i-1].first){
            if(arr[i].second != arr[i-1].second){
                ans = false;
            }
        }
    }

    if(ans) yes
    else no
    
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif

    int t; cin >> t; while (t--)
        solve();
}