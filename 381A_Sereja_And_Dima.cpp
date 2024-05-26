#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    int score1 =0;
    int score2 = 0;

    int i = 0;
    int j = n-1;

    int arr[n];
    for(int k=0; k<n; k++){
        cin >> arr[k];
    }

    for(int k=0; k<n; k++){
        if(arr[i] > arr[j]){
            if(k%2 == 0) score1 += arr[i];
            else score2 += arr[i];
            i++;
        }
        else{
            if(k%2 == 0) score1 += arr[j];
            else score2 += arr[j];
            --j;
        }
    }
    cout << score1 << " " << score2;
}