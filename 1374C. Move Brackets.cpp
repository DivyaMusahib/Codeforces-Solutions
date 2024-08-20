#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;


void solve(){
    int n; cin >> n;
    string s; cin >> s;
    stack<char>st;
    for(int i=0; i<n; i++){
        if(!st.empty()) {
            if(st.top()=='(' && s[i]==')') st.pop();
            else st.push(s[i]);
        }
        else st.push(s[i]);
    }
    cout << st.size()/2 << "\n";
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t; while(t--)
        solve();
        
}