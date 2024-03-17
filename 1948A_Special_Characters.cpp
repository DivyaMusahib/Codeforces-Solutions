// 15 march 2024 contest
#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin >> t;
 
 
    for(int i=0; i<t; i++){
        int n;
        cin >> n;
 
        if(n%2!=0){
            cout << "NO\n";
        }
 
        else if(n%2==0){
            cout << "YES\n";
 
            for(int j=0; j<n/2; j++){
                cout << "AAB";
            }
            cout << endl;
 
        }
    }
 
}