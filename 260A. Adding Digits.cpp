#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int a,k,n;
    cin >> a >> k >> n;
    bool ans = true;
    a = 10*a + 9;
    if((a % k) <= 9 ) a = a - a%k;
    else ans = false;

    if(ans){
        n--;
        string s = to_string(a);
        while(n--) s += '0';
        cout << s;
    } else {
        cout << -1;
    }
    
}