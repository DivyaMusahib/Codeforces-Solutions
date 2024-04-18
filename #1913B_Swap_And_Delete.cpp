#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        string s;
        cin >> s;
        long long count0=0, count1=0;
        

        for(int i=0; i<s.length();i++){
            if(s[i]=='0') count0++;
            else count1++;
        }

        int ans=-1;
        if(count1==count0) ans = 0;
        
        int i=0;
        for(; i<s.size() && count0>=0 && count1>=0; i++){
            if(s[i]=='0') count1--;
            else count0--;
            if(count0<0 || count1<0) break;
        }


        if(ans == 0) cout << 0<< endl;
        else{
            cout << s.size() - (i) << endl;
        }
        
    }
}