#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    
    // stack<pair<char,int>>st;
    // for(int i=0; i<=n; i++) {
    //     if(st.empty()==false) {
    //         if(st.top().first=='('){
    //             if(s[i]=='_'){
    //                 st.pop();
    //                 s[i] = ')';
    //             }
    //             else if(s[i]=='('){
    //                 st.push({'(',i});
    //             }
    //             else if(s[i]==')'){
    //                 st.pop();
    //             }
    //         }
    //         else if(st.top().first == '_'){
    //             s[st.top().second]='(';
    //             st.top().first = '(';
    //         }
    //     }
    //     else {
    //         st.push({s[i],i});
    //     }
    // }
    // cout << s;

    // stack<pair<char, int>> st;

    // for (int i = 0; i < n; i++) {
    //     if (!st.empty()) {
    //         if (st.top().first == '(') {
    //             if (s[i] == '_') {
    //                 st.pop();
    //                 s[i] = ')';
    //             } else if (s[i] == '(') {
    //                 st.push({'(', i});
    //             } else if (s[i] == ')') {
    //                 st.pop();
    //             }
    //         } else if (st.top().first == '_') {
    //             s[st.top().second] = '(';
    //             st.top().first = '(';
    //         }
    //     } else {
    //         if (s[i] == '_' || s[i] == '(') {
    //             st.push({s[i], i});
    //         }
    //     }
    // }

    // while (!st.empty()) {
    //     auto top = st.top();
    //     st.pop();
    //     if (top.first == '_') {
    //         s[top.second] = '(';
    //     }
    // }

    // cout << s << "\n";
    stack<int>st;
    for (int i = 0; i < n; i++) {
        if (s[i] == '(') {
            st.push(i);
        } else if (s[i] == ')') {
            if (!st.empty()) {
                st.pop();
            }
        } else if (s[i] == '_') {
            if (!st.empty()) {
                s[i] = ')';
                st.pop();
            } else {
                s[i] = '(';
                st.push(i);
            }
        }
    }

    while (!st.empty()) {
        int idx = st.top();
        st.pop();
        s[idx] = '(';
    }

    // cout << s << "\n";

    stack<int> sta;
    int cost = 0;

    for (int i = 0; i < s.size(); ++i) {
        if (s[i] == '(') {
            sta.push(i);
        } else if (s[i] == ')') {
            int openingIndex = sta.top();
            sta.pop();
            cost = cost +  i - openingIndex;
        }
    }

    cout << cost << "\n";
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; 
    cin >> t; 
    while (t--)
        solve();
}
