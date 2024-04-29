#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;

    int count =0;
    int i=0;

    while(i<s.size()){
        if(count == 0 && s[i]=='h') count++;
        else if(count == 1 && s[i]=='e') count++;
        else if(count ==2 && s[i]=='l') count++;
        else if(count ==3 && s[i]=='l') count++;
        else if(count ==4 && s[i]=='o'){
            count++;
            break;
        }
        i++;
    }

    if(count==5) cout << "YES";
    else cout << "NO";
}