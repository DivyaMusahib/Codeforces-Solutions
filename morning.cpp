#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    for(int i =0; i<t; i++){
       string s;
       cin >> s;
    
        int count =0;
        int previous = 1;
        int current;
        for(int j=0; j<4; j++){
            if(s[j]=='0') {s[j]=10;}
            current = (int)s[j];
            count = count + abs(current - previous) +1;
            previous = current;
        }

        cout << count << "\n";

    }
    return 0;
}