#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    vector<char>charset(26);
    for(int i=0; i<26; i++){
        charset[i] = (char)(i+97);
    }
    while(t--){
        char third,second,first;
        int n;
        cin >> n;
        
        n= n-26;
        if(n>=2){
            third = charset[26-1];
            n = n-26;
            if(n>=1){
                second = charset[26-1];
                first = charset[n-1];
            }
            else{
                second = charset[26+n-1-1];
                first = charset[0];
            }
        }
        else{
            third = charset[26+n-2-1];
            second = charset[0];
            first = charset[0];
        }

        cout << first << second << third << "\n";
    }
}