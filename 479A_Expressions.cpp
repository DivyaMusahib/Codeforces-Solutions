#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c, x[6], max, i;
    std::cin >> a >> b >> c;
    x[0] = a + b + c;
    x[1] = a * b * c;
    x[2] = (a + b) * c;
    x[3] = a + (b * c);
    x[4] = a * (b + c);
    x[5] = (a * b) + c;
    max = x[0];
    for (i = 0; i < 6; i++) {
        if (max <= x[i]) max = x[i];
    }
    cout << max;
    return 0;
}
