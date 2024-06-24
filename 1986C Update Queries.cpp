#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
    int n,m;
    cin >> n >> m;

    string s;
    cin >> s;

    int arr[m];
    for(int i=0; i<m; i++) cin >> arr[i];
    sort(arr,arr+m);

    string temp;
    cin >> temp;
    sort(temp.begin(),temp.end());

    int x = 0;
    for(int i=0; i<m-1; i++){
        if(arr[i]!=arr[i+1]){
            s[arr[i]-1] = temp[x];
            x++;
        }
    }
    s[arr[m-1]-1] = temp[x];

    cout << s;

}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    #ifndef ONLINE_JUDGE 
    freopen("input.txt", "r", stdin); 
    freopen("output.txt", "w", stdout); 
    #endif 

    int t;
    cin >> t;
    while (t--) {
        solve();
        cout << "\n";
    }
}