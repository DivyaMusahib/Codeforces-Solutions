#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b;
    cin >> a >> b;
    int maxi = max(a,b);
    int ans = 6-maxi+1;

    if(ans==6){
        cout << "1/1";
    }
    else if(ans%2==0){
        cout << ans/2 << "/" << 3;
    }
    else if(ans%3==0){
        cout << ans/3 << "/" << 2;
    }
    
    else
        cout << ans << "/" << 6;

    return 0;
}

