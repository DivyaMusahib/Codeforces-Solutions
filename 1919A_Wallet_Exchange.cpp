#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        long long a, b;
        cin >> a >> b;
        if (a%2!=0 && b%2!=0 || !(a%2!=0 || b%2!=0)) cout << "Bob\n";
        else cout << "Alice\n";
    }
}