// today 16th june 2024 contest i didnt gave with my acc but in contest i solved 2 question // protest week finish

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int>arr(n);
    for(int i=0; i<n; i++) cin >> arr[i];
    int ans = arr[n-1];
    arr[n-1] = 0;
    sort(arr.rbegin(),arr.rend());
    ans += arr[0];
    cout << ans;
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    #ifndef ONLINE_JUDGE 
    freopen("input.txt", "r", stdin); 
    freopen("output.txt", "w", stdout); 
    #endif 

    int t;
    cin >> t;
    while (t--) {
        solve();
        cout << "\n";
    }
}
