#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int a,b;
        cin >> a >> b;

        string s;
        cin >> s;
        int j=0;
        sort(s.begin(),s.end());
        vector<int>arr(26,0);
        for(int i=0;i<a; i++){
            j = s[i] - 97;
            arr[j]++;
        }

        int countodd=0;

        for(int i=0; i<26; i++){
            if(arr[i]%2 !=0 ) countodd++;
        }

        if(countodd<=b+1) cout << "YES\n";
        else cout << "NO\n";

    }
}