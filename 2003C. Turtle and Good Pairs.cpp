#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;


void solve(){
    ll n;
    cin >> n;
    vector<ll>arr(26,0);
    string s;
    cin >> s;
    for(int i=0; i<n; i++){
        arr[s[i]-'a']++;
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<26; j++){
            if(arr[j]>0){
                cout << (char)(j+'a');
                arr[j]--; 
            }
        }
    }
    cout << "\n";
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t; while(t--)
        solve();
        
}