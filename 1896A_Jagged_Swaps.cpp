#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    for(int i=0; i<t; i++){
        int n;
        cin >> n;
        int min = INT_MAX;

        vector<int>arr(n);

        for(int j=0; j<n; j++){
            cin >> arr[j];
            if(arr[j]<min) min = arr[j];
        }
        
        if(arr[0]==min) cout << "YES\n";
        else cout << "NO\n";

        //Logic is that you can make the array sort by swapping ---> only if first element is minimum because you can select index only from 2 to n-1 if the minimumelement is not on first position then the element at first cant be moved at any position further it will get stucked there 
    }
    return 0;
}