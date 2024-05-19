#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int>b(n-1);
        vector<int>a;

        for(int i=0; i<n-1; i++){
            cin >> b[i];
        }

        a.emplace_back(b[0]);

        for(int i = 0; i < n - 2; i++){
            a.emplace_back(min(b[i], b[i + 1]));
        }
        a.emplace_back(b[n - 2]);
        
        for(int i=0; i<n; i++){
            cout << a[i] << " ";
        }
        cout << "\n";
    }
}