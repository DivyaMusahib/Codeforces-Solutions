#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin >> t;
 
    for(int i=0; i<t; i++){
    int n;
    cin >> n;
    string s;
    cin >> s;
    
    int count_T = 0, count_i = 0, count_m = 0, count_u = 0, count_r = 0;

    if(n!=5) cout << "NO\n";
    else if(n==5){

        for(int j=0; j<5; j++){
            if(s[j]=='T') count_T++;
            else if(s[j]=='i') count_i++;
            else if(s[j]=='m') count_m++;
            else if(s[j]=='u') count_u++;
            else if(s[j]=='r') count_r++;
        }

        if(count_T==1 && count_i==1 && count_m==1 && count_u==1 && count_r==1) cout << "YES\n";
        else cout << "NO\n";
    }
    }
    
    return 0;
}