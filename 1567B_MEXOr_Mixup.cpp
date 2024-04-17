#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    vector<int>xorOfAll(1000000,0);
    
    for(int i=1; i<1000000; i++){
        xorOfAll[i] = (xorOfAll[i-1]) ^ i;
    }

    while(t--){
        long long a,b;
        cin >> a >> b;

        int ans = a;
        // x^y = z means x^z=y
        if(xorOfAll[a-1]==b) ans = ans;
        else if((xorOfAll[a-1]^b)==a) ans = ans + 2;
        else ans = ans + 1;

        cout << ans << endl;
    }
}