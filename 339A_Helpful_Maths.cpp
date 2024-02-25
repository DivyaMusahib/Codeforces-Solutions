#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;

    int n = (s.length()/2) + 1;

    vector<char>arr(n);
    int j=0;

    for(int i=0; i<s.length(); i=i+2){
        arr[j] = s[i];
        j++;
        // arr.push_back(s[i]);
    }

    sort(arr.begin(), arr.end());

    for(int k=0; k <n; k++){
        cout<< arr[k];
        if(k!=n-1) cout << "+";
    }
}