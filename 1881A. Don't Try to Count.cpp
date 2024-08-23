#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;

void solve(){
    int n , m;
    cin >> n >> m;
    string x; cin >> x;
    string s; cin >> s;
    for(int i=1; i<=5; i++){
        x.append(x);
    }
    int ans = -1;
    for(int i=0; i<x.length()-m; i++){
        string temp = x.substr(i,m);
        if(temp == s){
            ans = i+m;
            break;
        }
    }
    if(ans == - 1) cout << "-1\n";
    else if(ans<=n)cout << "0\n";
    else if(ans>n && ans<=2*n) cout << "1\n";
    else if(ans>2*n && ans<=4*n) cout << "2\n";
    else if(ans>4*n && ans<=8*n) cout << "3\n";
    else if(ans>8*n && ans<=16*n) cout << "4\n";
    else if(ans>16*n) cout << "5\n";
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t; while(t--)
        solve();
        
}