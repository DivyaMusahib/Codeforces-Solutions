#include<bits/stdc++.h>
using namespace std;

int main(){
    string s,t;
    cin >> s;
    bool ans=false;
    bool isPalindrome=false;

    // checking palindrome
    for(int i=0; i<=(s.size()/2); i++){
        if(s[i]==s[s.size()-1-i]) isPalindrome=true;
        else{
            isPalindrome=false;
            break;
        }
    }

    if(isPalindrome){
    for(int i=0; i<s.length(); i++){
        if(s[i] == 'A' || s[i] == 'H' || s[i] == 'I' || s[i] == 'M' || s[i] == 'O' || s[i] == 'T' || s[i] == 'U' || s[i] == 'V' || s[i] == 'W' || s[i] == 'X' || s[i] == 'Y') ans = true;
        else{
            ans = false;
            break;
        }
    }
    }

    if(ans) cout<< "YES";
    else cout << "NO";
}