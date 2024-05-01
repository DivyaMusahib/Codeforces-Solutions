#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    
    while(t--){
        char matrix[8][8];

        for(int i=0; i<8; i++){
            for(int j=0; j<8; j++){
                cin >> matrix[i][j];
            }
        }

        bool isBlue= false;
        bool isRed = false;

        
        for(int i=0; i<8; i++){
            int count =0;
            for(int j=0; j<8; j++){
                if(matrix[i][j]=='R') count++;
                else break;
            }
            if(count==8){
                isRed = true;
                break;
            }
        }

        if(isRed== false){
            for(int i=0; i<8; i++){
                int count =0;
                for(int j=0; j<8; j++){
                    if(matrix[i][j]=='B') count++;
                    else break;
                }
                if(count==8){
                    isBlue = true;
                    break;
                }
            }
        }

        if(isRed==false && isBlue==false){
            for(int i=0; i<8; i++){
                int count =0;
                for(int j=0; j<8; j++){
                    if(matrix[j][i]=='R') count++;
                    else break;
                }
                if(count == 8){
                    isRed = true;
                    break;
                }
            }

            if(isRed==false) isBlue = true;
        }


        if(isRed) cout << "R\n";
        else cout << "B\n";

    }
}