#include<bits/stdc++.h>
using namespace std;

int main(){
    int m,s;
    cin >> m >> s;

    if(s>9*m || (s==0 && m!=1)) cout << "-1 -1";
    else{
        vector<int>arrLowest(m,9); // it means defining each element of vector as 9 and size m

        int count = 9*m - s;
        

        // lowest-------------------------------------
        // for leftmost digit
        if(s==0 && m==1) arrLowest[0]=0;
        else if(count>=8){
            arrLowest[0]=1;
            count = count -8;
        }
        else if(count<8){
            arrLowest[0]= arrLowest[0]-count;
            count= 0;
        }

        // for rest all digits

        while(count>0 && m>1){
            for(int i=1; i<m; i++){
                if(count>=9){
                    arrLowest[i] = 0;
                    count -= 9;
                }
                else if(count==0) break;
                else{
                    arrLowest[i]= arrLowest[i]-count;
                    count =0;
                }
            }
        }

        for(int i=0; i<m; i++){
        cout << arrLowest[i];
        }

        cout << " ";

        // highest-----------------------------------------
        vector<int>arrHighest(m,9);
        int countHigh = 9*m - s;

        while(countHigh>0){
            for(int i=m-1; i>=0; i--){
                if(countHigh>=9){
                    arrHighest[i] = 0;
                    countHigh -= 9;
                }
                else if(countHigh==0) break;
                else{
                    arrHighest[i] -= countHigh;
                    countHigh=0;
                }
            }
        }


        for(int i=0; i<m; i++){
            cout << arrHighest[i];
        }

    }
}