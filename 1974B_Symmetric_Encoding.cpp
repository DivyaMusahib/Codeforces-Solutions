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

    int len = s.size();
    bool arr[26] = {false};
    
    for(int i=0; i<len; i++){
        arr[s[i]-'a'] = true;
    }
    
    vector<char>r;
    for(int i=0; i<26; i++){
        if(arr[i]==true) r.emplace_back('a' + i);
    }

    // for(int i=0; i<r.size(); i++){
    //     cout << r[i];
    // }

    int r_len = r.size();
    for(int i=0; i<len; i++){
        int find = 0;
        int j=0;
        for(; j<r_len; j++){
            if(s[i]==r[j]){
                find = j;
                break;
            }
        }
        s[i] = r[r_len-j-1];
    }

    cout << s;

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