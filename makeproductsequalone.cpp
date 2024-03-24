#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int count_negative=0,sum_negative=0;
    int count_positive=0,sum_positive=0;
    int count_zero=0;
    int ans=0;


    vector<int>arr(n);

    for(int i=0; i<n; i++){
        cin >> arr[i];
        if(arr[i]>0){
            count_positive++;
            sum_positive += arr[i];
        }
        else if(arr[i]<0){
            count_negative++;
            sum_negative += arr[i];
        }    
        else if(arr[i]==0) count_zero++;
    }

    


    return 0;
}