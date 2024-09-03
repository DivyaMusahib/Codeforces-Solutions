#include <iostream>
#include <string>
#include <vector>
#include <cmath>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        string k, s;
        cin >> k >> s;
        
        vector<int> pos(26);
        for (int i = 0; i < k.size(); i++) {
            pos[k[i] - 'a'] = i;
        }
        
        int res = 0;
        for (int i = 1; i < s.size(); i++) {
            res += abs(pos[s[i] - 'a'] - pos[s[i - 1] - 'a']);
        }
        
        cout << res << endl;
    }
    
    return 0;
}