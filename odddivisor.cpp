#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    for(int i=0; i<t; i++){
        int n,count=0;
        cin >> n;

        for(int j=2; j<=n; j++){
            if(n%j==0 && j%2!=0){
                count++;
                cout << j<<endl;
                break;
            }
            else continue;
        }

        if(count==1) cout << "YES\n";
        else if(count==0)cout << "NO\n";
    }
}