#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;

    for(int i=0; i<s.size(); i++){
        if(i==0 || s.size() == 1){
            if(((int)s[i]-48)>=5 && ((int)s[i]-48)!=9) cout << 9-((int)s[i]-48);
            else cout << (int)s[i]-48;
        }
        else if(s.size() != 1 && i!=0){
            if(((int)s[i]-48)>=5) cout << 9-((int)s[i]-48);
            else cout << (int)s[i]-48;
        }
    }

    return 0;
}