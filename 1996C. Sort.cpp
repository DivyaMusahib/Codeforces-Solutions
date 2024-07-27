#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;


void solve(){
    int n,q;
    cin >> n >> q;
    string s1 ,s2;
    cin >> s1 >> s2;
    vector<vector<int>>arr1(n+1, vector<int>(26,0));
    vector<vector<int>>arr2(n+1, vector<int>(26,0));
    for(int i=0; i<n; i++){
        arr1[i+1] = arr1[i];
        arr2[i+1] = arr2[i];
        arr1[i+1][s1[i]-'a']++;
        arr2[i+1][s2[i]-'a']++;
    }
    // cout << "String 1\n";
    // for(int i=0; i<=n; i++){
    //     for(int j=0; j<26; j++){
    //         cout << char(j+'a') << ":" << arr1[i][j] << " ";
    //     }
    //     cout << "\n";
    // }

    // cout << "String 2\n";
    // for(int i=0; i<=n; i++){
    //     for(int j=0; j<26; j++){
    //         cout << char(j+'a') << ":" << arr2[i][j] << " ";
    //     }
    //     cout << "\n";
    // }
    while(q--){
        int ans = 0;
        int l,r;
        cin >> l >> r;
        vector<int>temp1(26,0);
        vector<int>temp2(26,0);
        for(int i = 0; i<26; i++){
            temp1[i] = arr1[r][i] - arr1[l-1][i];
            temp2[i] = arr2[r][i] - arr2[l-1][i];
            ans = ans + abs(temp1[i]-temp2[i]);
        }
        // cout << "debug" << "\n";
        // for(int i=0; i<26; i++){
        //     cout << char(i+'a') << ":" << temp1[i] << " "; 
        // }
        // cout << "\n";
        // for(int i=0; i<26; i++){
        //     cout << char(i+'a') << ":" << temp2[i] << " "; 
        // }
        // cout << "\n";
        cout << ans/2 << "\n";        
    }
}

int main(){
    // ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t; while(t--)
        solve();
        
}