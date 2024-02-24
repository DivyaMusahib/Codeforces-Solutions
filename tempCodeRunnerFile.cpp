#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;

    int count4=0;
    int count7=0;
    for(int i=0; i<s.length(); i++){
        if(s[i]=='4') count4++;
        else if(s[i]=='7') count7++;
        else {
            cout << "NO\n";
            break;
        }
    }

    if((count4 + count7) == s.length() && count4>0 && count7>0) cout << "YES\n";
    else cout << "NO\n";
    
    return 0;
}