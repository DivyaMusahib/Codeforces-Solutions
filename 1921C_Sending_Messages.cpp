#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        long long n, f, a, b;
        cin >> n >> f >> a >> b;
        
        vector<int> m(n + 1);
        m[0]=0;
        for (int i = 1; i <= n; i++) {
            cin >> m[i];
        }
        
        long long ans =0;
        for (int i = 1; i <= n; i++) {
            ans += min(a * (m[i] - m[i - 1]), b);
        }
        
        if(ans>=f) cout <<"NO\n";
        else cout << "YES\n";
    }
    
    return 0;
}