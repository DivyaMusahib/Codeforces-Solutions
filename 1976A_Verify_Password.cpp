#include<bits/stdc++.h>
using namespace std;

typedef long long ll; 
typedef vector<ll> v64; 
typedef vector<int> v32; 
#define loop(i, a, b) for(ll i = a; i < b; i++)
#define all(x) (x).begin(), (x).end() 

void solve(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    // int foundStr = 0;
    // bool str = false;
    // for(int i=0; i<s.size(); i++){
    //     if(s[i]>='0' && s[i]<='9' && str==false){
    //         continue;
    //     }
    //     else{
    //         str = true;

    //     }
    // }
    string k  = s;
    sort(k.begin(),k.end());
    if(k==s) cout << "YES";
    else cout << "NO";
}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    #ifndef ONLINE_JUDGE 
    freopen("input.txt", "r", stdin); 
    freopen("output.txt", "w", stdout); 
    #endif

    int t;
    cin >> t;

    while(t--){
        solve();
        cout << "\n";
    }
    
}