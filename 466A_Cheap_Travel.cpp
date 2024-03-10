#include<bits/stdc++.h>
using namespace std;

int main(){

    int n,m,a,b,cost1,cost2,cost3;
    cin >> n >> m >> a >> b;

    if(m<=n){
        // if(n%m==0) cost = (n/m)*b;
        // else cost = (n/m)*b + (n%m)*a;
        cost1 = (n/m)*b + (n%m)*a;
        cost2 = (n/m)*b + b;
        cost3 = n*a;
        if(cost1<=cost2 && cost1<=cost3) cout << cost1;
        else if(cost2<=cost1 && cost2<=cost3) cout << cost2;
        else if(cost3<=cost1 && cost3<=cost2) cout << cost3;
    }
    else if(m>n){
        int ans1 = b;
        int ans2 = n*a;

        if(ans1>=ans2)cout << ans2;
        else cout << ans1;
    }

    return 0;
}