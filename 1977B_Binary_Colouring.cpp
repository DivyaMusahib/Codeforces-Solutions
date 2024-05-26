#include<bits/stdc++.h>
using namespace std;

vector<int>ans(int x) {
    vector<int>a;
    while (x > 0) {
        if (x % 2 == 1) {
            a.push_back(1);
            x -= 1;
        } else {
            a.push_back(0);
        }
        x /= 2;
    }

    int n = a.size();
    for (int i = 0; i < n - 1; ++i) {
        if (a[i] == 1 && a[i + 1] == 1) {
            a[i] = -1;
            int j = i + 1;
            while (j < n && a[j] == 1) {
                a[j] = 0;
                ++j;
            }
            if (j == n) {
                a.push_back(1);
                n++;
            } else {
                a[j] = 1;
            }
        }
    }

    // here took help of gpt
    while (a.size() < 32) {
        a.push_back(0);
    }

    return a;
}

int main() {
    #ifndef ONLINE_JUDGE 
    freopen("input.txt", "r", stdin); 
    freopen("output.txt", "w", stdout); 
    #endif
    int t;
    cin >> t;
    vector<int> test(t);
    
    for (int i = 0; i < t; ++i) {
        cin >> test[i];
    }
    
    for (int x : test) {
        vector<int> a = ans(x);
        cout << a.size() << endl;
        for (int ai : a) {
            cout << ai << " ";
        }
        cout << endl;
    }
    
    return 0;
}