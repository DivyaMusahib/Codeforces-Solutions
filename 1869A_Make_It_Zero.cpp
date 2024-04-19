#include<bits/stdc++.h>
using namespace std;

int main(){

    // freopen("make_it_zerokaoutput", "w" ,stdout);
    int t; cin >> t;

    while(t--){
        long long xorall = 0;
        int n; cin >> n;
        vector<int>arr(n);
        for(int i=0; i<n; i++){
            cin >> arr[i];
            xorall ^= arr[i];
        }

        if(xorall==0){
            cout << 1 <<"\n";
            cout << 1 << " " << n << "\n";
        }
        else if(n%2==0){
            cout << 2 << endl;
            cout << 1 << " " << n << "\n";
            cout << 1 << " " << n << "\n";
        }
        else if(n%2!=0){
            cout << 4 << endl;
            cout << 1 << " " << n-1 << endl;
            cout << 1 << " " << n-1 << endl;
            cout << n-1 << " " << n << endl;
            cout << n-1 << " " << n << endl;
            
        }

    }
}