#include<bits/stdc++.h>
using namespace std;

int main(){
    int q; cin >> q;

    while(q--){
        long long l,r,d;
        cin >> l >> r >> d;

        long long mini = ceil((float)l/d), end = r/d;

        if(mini>1 && mini!=0 || end<0) cout << d << "\n ";
        else cout << (end+1)*d << "\n";
         
    }
}