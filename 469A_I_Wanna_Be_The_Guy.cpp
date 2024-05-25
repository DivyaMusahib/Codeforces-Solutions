#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> arr(n+1,1);
    int p;
    cin >> p;
    for(int i=0; i<p; i++){
        int x;
        cin >> x;
        arr[x] = 0;
    }
    int m;
    cin >> m;
    for(int i=0; i<m; i++){
        int x;
        cin >> x;
        arr[x] = 0;
    }
    int sum =0;
    for(int i=1; i<=n; i++){
        sum += arr[i];
    }
    if(sum >0) cout << "Oh, my keyboard!";
    else cout << "I become the guy.";

}