#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >>n;
    int count =0;

    vector<int>arr1(n);
    vector<int>arr2(n);

    for(int i=0; i<n; i++){
        cin >> arr1[i];
        cin >> arr2[i];
    }

    for(int j=0; j<n; j++){
        for(int k=0; k<n; k++){
            if(j!=k && arr1[j]==arr2[k]) count++;
            // if(j!=k && arr2[j]==arr1[k]) count++;
        }
    }

    cout << count ;

}