#include<iostream>
using namespace std;

int main(){

    int n;
    cin >> n;

    int arr[n];
    int arr1[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
        arr1[i]= arr[i];
    }

    for(int j=0; j<n; j++){
        arr1[arr[j]-1]= j+1;
    }

    for(int k=0; k<n; k++){
        cout << arr1[k] << " ";
    }

    return 0;
}