#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >>t;

    for(int i=0; i<t; i++){
        int n;
        cin >> n;
        vector<int>arr(n);
        for(int j=0; j<n; j++){
            cin >> arr[j];
            if(j!=0){
                if((arr[j]%arr[j-1]==0) && arr[j-1]!=1){arr[j]+=1;}
                else if(arr[j-1]==1){
                    arr[j-1]++;
                    if(arr[j]%arr[j-1]==0){arr[j]+=1;}
                }
            }
        }

        for(int k=0; k<n; k++){
            cout << arr[k] << " ";
        }
        cout << "\n";
    }
    return 0;
}