#include<bits/stdc++.h>
using namespace std;

int main(){
    string s,t;
    cin >> s;
    bool ans;

    for(int i=0; i<s.length(); i++){
        if(s[i] == 'A' || s[i] == 'H' || s[i] == 'I' || s[i] == 'M' || s[i] == 'O' || s[i] == 'T' || s[i] == 'U' || s[i] == 'V' || s[i] == 'W' || s[i] == 'X' || s[i] == 'Y') ans = true;
        else{
            ans = false;
            break;
        }

        if(ans == true){
            t = s;
        reverse(t.begin(),t.end());
        for(long long i=0; i<s.size(); i++){
            if(s[i] == t[i]){
                ans= true;
            }
            else{
                ans = false;
                break;
            }
        }
        }
    }

    if(ans) cout<< "YES";
    else cout << "NO";
}