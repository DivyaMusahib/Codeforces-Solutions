#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    string s;
    cin >> s;
    stack<char>st;
    ll ans =0;
    for(int i=0; i<s.size(); i++) {
        if(st.empty()){
            st.push(s[i]);
        } else {
            if(st.top()=='{' && (s[i]=='>' || s[i]==')' || s[i]==']')) {
                ans ++;
                st.pop();
            }
            else if(st.top()=='{' && s[i]=='}') st.pop();

            else if(st.top()=='<' && (s[i]=='}' || s[i]==')' || s[i]==']')) {
                ans ++;
                st.pop();
            }
            else if(st.top()=='<' && s[i]=='>') st.pop();

            else if(st.top()=='(' && (s[i]=='}' || s[i]=='>' || s[i]==']')) {
                ans ++;
                st.pop();
            }
            else if(st.top()=='(' && s[i]==')') st.pop();

            else if(st.top()=='[' && (s[i]=='}' || s[i]=='>' || s[i]==')')) {
                ans ++;
                st.pop();
            }
            else if(st.top()=='[' && s[i]==']') st.pop();

            else st.push(s[i]);
        }
    }
    if(st.empty()) cout << ans;
    else cout << "Impossible";
}