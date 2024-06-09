#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    string s;
    cin>>s;
    for (int i=0; i<s.size(); i++){
        if ('A'<=s[i] && s[i]<='Z'){
            s[i] = s[i]-'A'+'a';
        }
    }

    sort(s.begin(), s.end());
    s.erase(unique(s.begin(), s.end()), s.end());
    if (s.size() == 26) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}