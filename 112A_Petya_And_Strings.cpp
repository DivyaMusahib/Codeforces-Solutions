#include<bits/stdc++.h>
using namespace std;

int main(){
    
    string s1,s2;
    cin >> s1 >> s2;
    int count=0;

    for(int i=0; i<s1.length(); i++){
        if(s1[i]<=90) s1[i] = s1[i] + 32; 
        if(s2[i]<=90) s2[i] = s2[i] + 32;

        if(s1[i] < s2[i]){
            cout << -1 << "\n";
            break;
        } else if(s1[i] > s2[i]){
            cout << 1 << "\n";
            break;
        } else if(s1[i]==s2[i]) count++;
    }

    if(count == s1.length()) cout << 0 << "\n";
    
    return 0;
}