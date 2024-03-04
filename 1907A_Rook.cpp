#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    for(int i=0; i<t; i++){
        char s;
        int n;
        cin >> s;
        cin >> n;

        for(int i=1; i<=8 ; i++){
            if(i!=n){
                cout << s <<i << "\n";
            }
        }

        for(char j='a'; j<='h'; j++){
            if(s!=j){
                cout << j << n << "\n";
            }
        }
    }
}