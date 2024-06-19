#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    char arr[n][m];
    for(int i=0; i<n; i++){
        for(int j=0;j<m; j++){
            cin >> arr[i][j];
        }
    }

    int count = 0;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(arr[i][j]=='W'){
                bool check = false;
                if(j!=m-1 && check==false){
                    if(arr[i][j+1]=='P'){
                        count++;
                        check = true;
                    }
                }
                if(j!=0 && check==false){
                    if(arr[i][j-1]=='P'){
                        count++;
                        check = true;
                    }
                }
                if(i!=n-1 && check==false){
                    if(arr[i+1][j]=='P'){
                        count++;
                        check = true;
                    }
                }
                if(i!=0 && check==false){
                    if(arr[i-1][j]=='P'){
                        count++;
                        check = true;
                    }
                }
            }
        }
    }


    cout << count;
}