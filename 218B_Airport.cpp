#include<bits/stdc++.h>
using namespace std;

int main(){
    int passenger, plane;
    cin >> passenger >> plane ;
    vector<int>arr(plane);
    for(int i=0; i<plane; i++){
        cin >> arr[i];
    }
    
    vector<int>arr2 = arr; // for minimum
    
    int maxFare = 0 , minFare = 0;
    
    for(int i=0; i<passenger ; i++){
        int maxElement = 0, maxElementIndex = 0 ;
        for(int j=0; j<plane; j++){
            if(arr[j] > maxElement){
                maxElement = arr[j];
                maxElementIndex = j;
            }
        }
        maxFare  += maxElement;
        arr[maxElementIndex]--;
    }
    
    sort(arr2.begin(),arr2.end());
    int i=0;
    while(passenger--){
        minFare += arr2[i];
        arr2[i]--;
        if(arr2[i]==0){
            i++;
        }
    }
    
    cout << maxFare << " " << minFare ;
    
}