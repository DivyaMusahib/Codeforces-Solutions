#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    int ans;
    int k = n/2;

    if(n % 2 == 0){
        if(k%m!=0) ans = k+ (m-k%m);
        else ans = k;
    }

    else{
        if((k+1)%m!=0) ans = (k + 1) + (m - (k+ 1)%m);
        else ans = k+1;
    }

    if(m>n) cout << -1;
    else cout << ans;
}