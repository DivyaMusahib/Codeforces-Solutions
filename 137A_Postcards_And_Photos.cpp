#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    int ans(0), count(1);
    for (int i = 1; i < s.length(); ++i)
    {
        if (s[i] == s[i-1]) count += 1;
        else
        {
            ans += (count + 4) / 5;
            count = 1;
        }
    }
    ans += (count + 4) / 5;
    cout << ans << endl;
    return 0;
}