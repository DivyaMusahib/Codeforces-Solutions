#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin >> n;
    string s;
    cin >> s;

    for(int i=0; i<n;i=i){
        if((s[i]=='1' && s[i+1]=='0') || (s[i]=='0' && s[i+1]=='1')){
            s.erase(i, 2); // earsing 2 character 
            n = n-2;
        }
        else i++;
    }

    cout << s;

    return 0;
}