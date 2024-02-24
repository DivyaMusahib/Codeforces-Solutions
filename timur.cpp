#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    for(int i=0; i<t; i++){
    int n;
    cin >> n;
    string s;
    cin >> s;
    
    if(n!=5) cout << "NO\n";
    else if(n==5){
        int count = 0;
        for(int j=0; j<5; j++){
            // cout << s[j];
            if(s[j]=='T' || s[j]=='i' || s[j]=='m' || s[j]=='u' || s[j]=='r'){
                count++;
            }

            // else count++;
        }
        // cout << count;
        if(count == 5) cout << "YES\n";
        else cout << "NO\n";

    }
    }
    
    return 0;
}