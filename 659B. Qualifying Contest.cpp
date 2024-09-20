#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    vector<vector<pair<int,string>>> arr(100001);
    for(int i=0; i<n; i++) {
        string name ; int region , score ;
        cin >> name >> region >> score;
        arr[region].push_back({score,name});
    }    
    // sort(arr.begin(),arr.end());

    for(int i=0; i<100001; i++) {
        if(arr[i].size()==0){
            continue;
        } else {
            sort(arr[i].rbegin(),arr[i].rend());
            // for(auto it : arr[i]) cout << it.first << " " << it.second << " " << i << "\n";
        }
    }
    for(int i=0; i<100001; i++){
        if(arr[i].size()==0){
            continue;
        } else if(arr[i].size()==2){
            cout << arr[i][0].second << " " << arr[i][1].second << "\n";
        } else {
            if(arr[i][1].first == arr[i][2].first) cout << "?\n";
            else cout << arr[i][0].second << " " << arr[i][1].second << "\n";
        }
    }
}

// #include <bits/stdc++.h>
// using namespace std;

// typedef long long ll;
// typedef long double ld;
// typedef pair <int, int> pii;

// int const N = 100 * 1000 + 20, M = 10 * 1000 + 20;
// int n, m;
// vector <pair<int, string>> vec[M];

// int main() {
//   ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
//   cin >> n >> m;
//   for (int i = 0; i < n; i ++){
//     string s; int reg, p;
//     cin >> s >> reg >> p;
//     vec[--reg].push_back({-p, s});
//   }

//   for (int i = 0; i < m; i ++) sort(vec[i].begin(), vec[i].end());

//   for (int i = 0; i < m; i ++){
//     if (vec[i].size() >= 3 && vec[i][1].first == vec[i][2].first) cout << "?\n";
//     else cout << vec[i][0].second << ' ' << vec[i][1].second << '\n';
//   }
// }