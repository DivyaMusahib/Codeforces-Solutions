#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >>s;

    vector<char>arr;
    for(int j =0; j<s.length(); j++){

        if(s[j]<=90 && s[j] >=65){
            s[j]=s[j] + 32;
        }

        if(s[j]!='a' && s[j]!='o' && s[j]!='y' && s[j]!='e' && s[j]!='u' && s[j]!='i'){
            arr.push_back(s[j]);
        }
    }

    for(int k=0; k<arr.size(); k++){
        cout << "." << arr[k];
        // cout << arr[k];
    }
    
    return 0;
}