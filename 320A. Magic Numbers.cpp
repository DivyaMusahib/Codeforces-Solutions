#include<bits/stdc++.h>
using namespace std;

bool solve(int n)
{
    if (n == 1 || n == 14 || n == 144) return 1;
    if (n % 10 == 1 && solve(n / 10)) return 1;
    if (n % 100 == 14 && solve(n / 100)) return 1;
    if (n % 1000 == 144 && solve(n / 1000)) return 1;
    return 0;
}

int main()
{
    int n;
    cin >> n;
    if (solve(n)) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}