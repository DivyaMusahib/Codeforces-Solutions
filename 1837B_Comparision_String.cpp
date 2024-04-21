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
        int count =1, max =0;
        for(int i=1; i<n; i++){
            if(s[i]==s[i-1]) count++;
            else{
                if(count>max) max = count;
                count =1;
            }
        }
        if(count>max) max = count;

        cout << max + 1<< "\n";
     }
}