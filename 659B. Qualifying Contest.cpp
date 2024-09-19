#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;
typedef pair <int, int> pii;

int const N = 100 * 1000 + 20, M = 10 * 1000 + 20;
int n, m;
vector <pair<int, string>> vec[M];

int main() {
  ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
  cin >> n >> m;
  for (int i = 0; i < n; i ++){
    string s; int reg, p;
    cin >> s >> reg >> p;
    vec[--reg].push_back({-p, s});
  }

  for (int i = 0; i < m; i ++) sort(vec[i].begin(), vec[i].end());

  for (int i = 0; i < m; i ++){
    if (vec[i].size() >= 3 && vec[i][1].first == vec[i][2].first) cout << "?\n";
    else cout << vec[i][0].second << ' ' << vec[i][1].second << '\n';
  }
}