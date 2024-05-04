#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n,x;
        cin >>n >> x;
        int odds =0, evens=0;
        for(int i=0; i<n; i++){
            int k;
            cin >> k;
            if(k&1) odds++;
            else evens++;
        }

        bool ans = false;
        if(odds == 0) ans = false;
        else {
            for(int i = 1; i <=odds; i+=2){
            if(i > x){
                break;
            }
            if((x - i) <= evens){
                ans = true;
                break;
            }
            }
        }

        if(ans) cout << "YES\n";
        else cout << "NO\n";
    }
}