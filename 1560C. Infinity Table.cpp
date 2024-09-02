#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
    ll n;
    cin >> n;
    ll temp = sqrt(n);
    ll tempsq = (long long)temp * temp;
    if(n==1) cout << "1 1";
    else if(n-tempsq < temp+1){
        if(n-tempsq == 0){
            cout << temp << " ";
            cout << 1;
        }
        else{
            cout << n-tempsq << " ";
            cout << temp+1;
        }
    } else {
        cout << temp + 1 << " ";
        cout << (temp+1)*1ll*(temp+1) - n + 1;
    }
    cout << "\n";
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t; while(t--)
        solve();      
}