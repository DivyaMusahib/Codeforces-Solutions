#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin >> n >> m;

    vector<long long>a(n);
    vector<long long>b(m);

    for(int i=0; i<n; i++){
        cin >> a[i];
    }

    sort(a.begin(),a.end());

    for(int i=0; i<m; i++){
        cin >> b[i];

        int x = upper_bound(a.begin(),a.end(),b[i]) - a.begin();
        cout << x << " ";
    }

}