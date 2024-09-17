#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;

void solve(){
    string x,y;
    cin >>x >> y;
    int i = x.size()-1 , j = y.size()-1;
    bool ans = false;
    set<char>st;
    while(i>=0 && j>=0) {
        if(x[i] == y[j]){
            if(st.find(x[i]) != st.end()){
                ans = false;
                break;
            }
            else {
                j--;
                i--;
            }
        }
        else{
            st.insert(x[i]);
            i--;

        }
        if(j==-1){
            ans = true;
            break;
        }
    }
    if(ans) cout << "YES\n";
    else cout << "NO\n";
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t; while(t--)
        solve();
        
}