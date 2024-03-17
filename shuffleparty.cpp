#include<bits/stdc++.h>
using namespace std;

int highest_divisor(int n){

}

int main(){

    int t;
    cin >>t;

    for(int i=0;i<t; i++){
        int n;
        cin >> n;

        vector<int>arr(n);
        for(int j=0; j<n; j++){
            arr[j] = j+1;
        }

        for(int x=1; x<n; x++){
            int high = highest_divisor(x+1);
            int temp = arr[x];
            arr[x] = arr[high-1];
            arr[high-1] = temp;

        }


        for(int k=0; k<n; k++){
            if(arr[k]==1) cout << k+1 << "\n";
        }

    }

    return 0;
}