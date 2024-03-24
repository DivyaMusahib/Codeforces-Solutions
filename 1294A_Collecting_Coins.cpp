#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    for(int i=0; i<t; i++){
        long long a,b,c,n;
        cin >> a >> b >> c >> n;

        long long sum = a+b+c+n;
        if(sum%3==0 && a<=(sum/3) && b<=(sum/3) && c<=(sum/3)) cout << "YES\n";
        else cout << "NO\n";
    }

    return 0;
}