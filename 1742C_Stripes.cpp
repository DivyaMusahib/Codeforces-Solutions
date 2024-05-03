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

        char ans='#';

        
        for(int i=0; i<8; i++){
            int count_R =0;
            for(int j=0; j<8; j++){
                if(matrix[i][j]=='R') count_R++;
                else break;
            }
            if(count_R==8){
                ans ='R';
                break;
            }
        }

        if(ans == '#') ans = 'B';

        cout << ans << endl;
    }
}