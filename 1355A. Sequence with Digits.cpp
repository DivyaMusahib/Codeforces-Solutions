#include<bits/stdc++.h>
using namespace std;
 
long long f(long long x) {
    string s = to_string(x);
    char mn = s[0], mx = s[0];
    for (char c: s) {
        mn = min(mn, c);
        mx = max(mx, c);
    }
    return x + (mn-'0')*(mx-'0');
}
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
 
    int t;
    cin>>t;
 
    while (t--) {
        long long a, k;
        cin>>a>>k;
        k--;
        for (int i=1; i<=k; i++) {
            long long nw = f(a);
            if (nw == a)    break;
            a = nw;
        }
        cout<<a<<endl;
    }
}