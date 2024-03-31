#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        vector<char>s(n);
        int count=0;
        bool hatrick = false;

        for(int i=0; i<n; i++){
            cin >> s[i];
            if(i!=0 && i!=1){
                if(s[i]=='.' && s[i-1]=='.' && s[i-2]=='.'){
                    hatrick = true;
                }
            }
            if(s[i]=='.') count++;
        }

        if(hatrick==true) cout << 2 << "\n";
        else cout << count << "\n";
    }
}