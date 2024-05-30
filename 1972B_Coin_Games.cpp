#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        
        long long n;
        cin >> n;
 
        string s;
        cin >> s;
 
        int count = 0;
        for(int i=0; i<n; i++){
            if(s[i] == 'U') count++;
        }
 
        if(count% 2 == 1) cout << "YES\n";
        else cout << "NO\n";
    }
}