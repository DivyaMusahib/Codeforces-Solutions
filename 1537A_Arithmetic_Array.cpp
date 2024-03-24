#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    for(int i=0; i<t; i++){
        int n;
        cin >> n;
        int sum =0;
        
        for(int j=0; j<n; j++){
            int x;
            cin >> x;
            sum = sum + x;
        }


        if((sum-n)<0) cout << 1 << "\n";
        else cout << sum - n << "\n";
    }
    return 0;
}