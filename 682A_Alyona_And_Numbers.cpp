#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin >> n >>m;

    // if(n>m) swap(n,m);

    // long long ans = 0;
    // int pair = m/5;
    // int k = m%5;

    // for(int i=1; i<=n; i++){
    //     if((i%5) <= k) ans += pair + 1;
    //     else ans += pair;
    //     if(i>5) ans --;
    //     cout << ans << "\n";
    // }
    // cout << ans;

    long long a[5]={0},b[5]={0};

    for(int i=1; i<=n; i++){
        a[i % 5] ++;
    }
    for(int i=1; i<=m; i++){
        b[i % 5] ++;
    }
    
	long long ans = 0;
    ans += a[0]*b[0];
    ans += a[1]*b[4];
    ans += a[2]*b[3];
    ans += a[3]*b[2];
    ans += a[4]*b[1];

    cout << ans;

}