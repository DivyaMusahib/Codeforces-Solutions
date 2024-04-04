#include<bits/stdc++.h>
using namespace std;

int main(){
    long long a,b,c;
    cin >> a >> b >> c;
    long long d = abs(a) + abs(b);
    if(c<d) cout << "NO";
    else if(c>=d){
        if((c-d)%2==0) cout << "YES";
        else cout << "NO\n";
    }
}