#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        float n,x;
        cin >> n >> x;
        if(n==1 || n==2) cout << 1 << "\n";
        else{
            cout << ceil((n-2)/x) + 1 << "\n";
        }
    }
}