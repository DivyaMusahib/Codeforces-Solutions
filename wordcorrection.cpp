#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    string s;
    cin >> s;

    for(int i=0; i<n; i++){
        if((s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='y') && (s[i+1]=='a' || s[i+1]=='e' || s[i+1]=='i' || s[i+1]=='o' || s[i+1]=='y')){
            s.erase(i+1, 1);
            i =0;
            n = n-1;
        }
    }

    cout << s;

    return 0;
}