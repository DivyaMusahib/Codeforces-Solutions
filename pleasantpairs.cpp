#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;

    for(int k=0; k<t; k++){
        int n;
        cin >> n;
        int arr[n];

        for(int l=0; l<n; l++){
            cin >> arr[l];
        }

        int count =0;

        for(int i=0;i<n; i++){
            for(int j=i+1; j<n; j++){
                if(arr[i]*arr[j] == i + j + 2) count++;
            }
        }
        
        cout << count << "\n";

    }
    return 0;
}

