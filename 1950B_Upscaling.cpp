#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    for(int i=0; i<t; i++){
        int n;
        cin >> n;

        int x,y;
        if(n%2==0){
            x = n/2;
            y = n/2;
        }
        else{
            x = n/2 + 1;
            y = n/2;
        }

        for(int j=1; j<=n; j++){
            for(int k=1; k<=n; k++){
                if(j%2!=0){
                    if(k%2!=0) cout << "##";
                    else cout << "..";
                }
                else{
                    if(k%2==0) cout << "##";
                    else cout << "..";

                }
            }
            cout << "\n";
            for(int k=1; k<=n; k++){
                if(j%2!=0){
                    if(k%2!=0) cout << "##";
                    else cout << "..";
                }
                else{
                    if(k%2==0) cout << "##";
                    else cout << "..";

                }
            }
            cout << "\n";

        }

    }

    return 0;
}