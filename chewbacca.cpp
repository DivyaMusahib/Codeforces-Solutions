#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    // vector<char>s;
    

    for(int i=0; i<s.size(); i++){
        // cin >> s[i];
        if(i==0){
            if((int)s[0]>4 && (int)s[0]!=9) cout << 9-(int)s[0];
            else if((int)s[0]<=4) cout << (int)s[0];
        }
        else{
            if((int)s[i]>4) cout << 9-(int)s[0];
            else if((int)s[i]<=4) cout << (int)s[0];

        }
    }
    
    return 0;
}
