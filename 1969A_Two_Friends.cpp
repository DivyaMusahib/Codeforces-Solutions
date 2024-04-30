#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        vector<int>a(n);
        for(int i=0; i<n; i++){
            cin >> a[i];
        }

        int ans =0;
        for(int i=1; i<=n; i++){
            if(a[a[i-1]-1] == i){
                ans =2;
                break;
            }
        }

        if(ans==2) cout << 2 << endl;
        else cout << 3 << endl;

        
    }
}