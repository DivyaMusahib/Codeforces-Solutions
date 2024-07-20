#include <bits/stdc++.h>
using namespace std;

int main() {
    // #ifndef ONLINE_JUDGE 
    freopen("input.txt", "r", stdin); 
    freopen("output.txt", "w", stdout); 
    // #endif
    int n; cin >> n;
    
    string s; cin >> s;
    
    vector<int>arr;
    for(int i=0; i<n; i++){
        if(s[i]=='1') arr.push_back(i);
    }

    bool ans = true;
    for(int i=1; i+1 < arr.size(); i++){
        if(arr[i]*2 != arr[i-1] + arr[i+1]){
            ans = false;
            break;
        }
    }

    if(ans) cout << "YES\n";
    else cout << "NO\n";
}