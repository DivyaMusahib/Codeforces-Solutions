#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, d;
    cin >> n >> d;
    int ans = 0;
    vector<int> arr(n);
    for (auto &it : arr) cin >> it;
    
    for (int i = 1; i < n; i++) {
        if (arr[i] <= arr[i-1]) {
            int diff = arr[i-1] - arr[i];
            int temp = (diff / d) + 1;
            arr[i] += d * temp;
            ans += temp;
        }
    }
    
    cout << ans;
}
