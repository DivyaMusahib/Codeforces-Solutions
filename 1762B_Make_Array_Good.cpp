#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        long long temp;

        vector<int>a(n);
        int maxi = 0;
        for(int i=0; i<n; i++){
            cin >> a[i];
            // maxi = max(maxi,a[i]);
        }

        cout << n << "\n";
        for(int i=0; i<n; i++){
            temp = pow(2,(ceil)(log2(a[i]))) - a[i];
            cout << i +1 << " " << temp << "\n";

        }
    }
}