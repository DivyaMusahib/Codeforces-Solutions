#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;

void solve() {
    string s;
    cin >> s;
    bool ans = false;
    
    if (s.size() == 1) {
        if (s == "a") {
            s += 'b';
        } else {
            s += 'a';
        }
        cout << s << "\n";
        return;
    }
    
    for (int i = 1; i < s.size(); ++i) {
        if(s[i]==s[i-1] && s[i]!='a'){
            s.insert(i,"a");
            ans = true;
            break;
        }
        else if(s[i]==s[i-1] && s[i]=='a') {
            s.insert(i,"b");
            ans = true;
            break;
        }
    
    }

    if(!ans) {
        for (int i = 1; i < s.size(); ++i) {
            if (s[i] != s[i - 1]) {
                if (s[i] - s[i - 1] == 1) {
                    if (s[i] != 'z') {
                        s.insert(i, "z");
                    } else {
                        s.insert(i, "a");
                    }
                } else if (s[i] - s[i - 1] == -1) {
                    if (s[i - 1] != 'z') {
                        s.insert(i, "z");
                    } else {
                        s.insert(i, "a");
                    }
                } else {
                    char temp = (s[i] + s[i - 1]) / 2;
                    s.insert(i, 1, temp);
                }
                ans = true;
                break;
            }
        }
    }
    
    if (!ans) {
        if (s.back() == 'a') {
            s += 'b';
        } else {
            s += 'a';
        }
    }
    
    cout << s << "\n";
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}