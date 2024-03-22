#include<bits/stdc++.h>
using namespace std;
 
int main() {
    long long n,t;
    cin >> n >> t;

    long long maxi = 1;
    for(int i = 1; i<=n; i++){
        maxi = maxi * 10;
    }
 
    long long mini = maxi/10;
    long long ans = -1;
    
    long long k = maxi % t;

    if(k!=0 && (maxi-k)>=mini){
        ans = maxi-k;
    }
    else if(k==0 && (maxi-t)>=mini){
        ans = maxi - t;
    }
    
    cout << ans;
 
    return 0;
}