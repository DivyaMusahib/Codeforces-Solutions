#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;


void solve(){
    int n;cin>>n;
    string s;cin>>s;
    vector<int>v;
    for (int i=0;i<n;i++){
        if (s[i]=='1'){
        v.push_back(i);
        }
    }
    if (v.size()%2){
        cout<<"NO\n";
        return;
    }
    if (v.size()==2 && v[0]+1==v[1]){
        cout<<"NO\n";
        return;
    }
    cout<<"YES\n";
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t; while(t--)
        solve();
        
}