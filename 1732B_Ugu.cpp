#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >>n;
        string s;
        cin >> s;
        int count10 = 0, count01 = 0;
        for(int i=0; i<n-1; i++){
            if(s[i]=='1' && s[i+1]=='0') count10++;
            else if(count10){
                if(s[i]=='0' && s[i+1]=='1') count01++;
            }
        }

        cout << count01+count10 << "\n";
    }
}