#include<bits/stdc++.h>
using namespace std;

int main(){

    int row,col;
    cin >> row >> col;
    int count =0;

    for(int i=0; i<row; i++){
        char arr[col];
        for(int j=0; j<col; j++){
            cin >> arr[j];
            if(arr[j]=='C' || arr[j]=='M' || arr[j]== 'Y') count++;
        }
    }

    if(count==0) cout << "#Black&White";
    else cout << "#Color";
    
    return 0;
}