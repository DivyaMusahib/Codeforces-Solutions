#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >>t;

    while(t--){
        int n;
        cin >> n;

        long long x = 0;
        vector<int>arr(n);

        for(int i=0; i<n; i++){
            cin >> arr[i];
            x ^= arr[i];
        }

        if(x==0) cout << 0 << endl;
        else if(n%2 !=0) cout << x << endl;
        else cout << -1 << endl;
    }
}