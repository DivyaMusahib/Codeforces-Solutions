#include<bits/stdc++.h>
using namespace std;

int main(){
    int n , enemy;
    cin >> n >> enemy;
    vector<int>arr(n);

    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    sort(arr.begin(),arr.end());

    int count =0;

    while(enemy<arr.size()*arr[arr.size()]){
        
    }
}