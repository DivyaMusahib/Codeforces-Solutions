#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        string s;
        cin >> s;
        bool check = false;
        long long ans =0;
        long long count =0;
        long long firstPos =INT_MAX;

        for(long long i=0; i<s.length(); i++){
            if(s[i]=='1' && firstPos== INT_MAX){
                firstPos = i;
            }
            if(s[i]=='0' && !(i<firstPos)){
                ans = ans + i - firstPos + 1 - count;
                count++;
            }
        }

        cout << ans << "\n";
        
    }
}