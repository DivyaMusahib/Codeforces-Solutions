#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;

void solve(){
    int n; cin >> n;

    string ans = "";
    int temp = n/5;
    int a = temp ;
    int e = temp ;
    int i = temp ;
    int o = temp ;
    int u = temp ;

    if(n % 5 == 1) e++;
    if(n % 5 == 2) {
        e++;
        i++;
    }
    if(n % 5 == 3) {
        e++;
        i++;
        o++;
    }
    if(n % 5 == 4){
        e++;
        i++;
        o++;
        u++;
    }
    for(int j=0; j<a; j++) ans+='a';
    for(int j=0; j<e; j++) ans+='e';
    for(int j=0; j<i; j++) ans+='i';
    for(int j=0; j<o; j++) ans+='o';
    for(int j=0; j<u; j++) ans+='u';

    cout << ans << "\n";

}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t; while(t--)
        solve();
        
}