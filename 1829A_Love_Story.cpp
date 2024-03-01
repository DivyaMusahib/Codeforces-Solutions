#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    string s = "codeforces";

    for(int i=0; i<t; i++){
        string s1;
        cin >> s1;
        int count =0;
        for(int j=0; j<10; j++){
            if(s[j]!=s1[j]) count++;
        }
        cout << count << "\n";
    }
    return 0;
}