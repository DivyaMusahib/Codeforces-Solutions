#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    vector<char>s(n);

    for(int i=0; i<n; i++){
        cin >> s[i];
        if(s[i] <= 90 && s[i] >= 65) s[i] = s[i] + 32;
    }

    sort(s.begin(),s.begin()+n);

    for(int j=0; j<n; j++){
        if(s[j]==s[j+1]){
            s.erase(s.begin()+j);
            n = n - 1;
        }
    }

    for(int i=0; i<n; i++){
        cout <<  s[i];
    }

    return 0;
}