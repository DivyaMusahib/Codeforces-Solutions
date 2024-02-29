#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    for(int i=0; i<t; i++){
        string s;
        cin >> s;

        int length = s.size();
        int count = 0;
        for(int j=1; j<length/2; j++){
            if(s[j]==s[j-1]) count++;
        }

        if(count == length/2-1) cout << "NO\n";
        else cout << "YES\n";
    }

    return 0;
}