#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[3][3];
    long long sum =0;

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cin >> arr[i][j];
            sum += arr[i][j];
        }
    }
    sum = sum/2;

    // arr[0][0] + arr[1][1] + arr[2][2] = sum /2;
    // arr[0][0] + arr[0][1] + arr[0][2] = sum/2;

    for(int i=0; i<3; i++){
        long long temp = 0;
        for(int j=0; j<3; j++){
            temp += arr[i][j];
        }
        arr[i][i] = sum -temp;
    }

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }

}