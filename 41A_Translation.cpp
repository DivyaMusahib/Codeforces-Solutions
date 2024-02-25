#include<bits/stdc++.h>
using namespace std;

int main(){
    string s1;
    string s2;

    cin >> s1;
    cin >> s2;

    int count = 0;
    for(int i=0; i<s1.size(); i++){
        if(s1[i]==s2[s1.size()-1-i]) count++;
        else {
            cout << "NO";
            break;
        }
    }

    if(count == s1.size()) cout << "YES";

    return 0;

}