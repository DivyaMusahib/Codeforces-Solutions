#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<pair<int,int>>arr(n);
    for(int i=0;i<n; i++){
        cin >> arr[i].first >> arr[i].second; 
    }

    int home= n-1;
    vector<int>count(100001,0);
    for(int i=0; i<n; i++){
        count[arr[i].first]++;

    }
    // cout << "ans \n";
    for(int i=0; i<n; i++){
        int home = n-1;
        int away = n - 1 - count[arr[i].second];
        home += count[arr[i].second];
        cout << home << " " << away << "\n";

    }

    // for(int i=0; i<n; i++){
    //     int home = n-1, away = 0;
    //     for(int j=0; j<n; j++){
    //         if(j!=i){
    //             if(arr[i].second == arr[j].first) home++;
    //             else away++;
    //         }
    //     }
    //     cout << home << " " << away << "\n";
    // }
}