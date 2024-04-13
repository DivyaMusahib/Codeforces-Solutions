#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    // freopen("output.txt", "w", stdout);

    while(t--){
        int k,q;
        cin >> k >> q;
        vector<int>arr(k);
        vector<int>arr1(q);

        for(int i=0; i<k; i++){
            cin >> arr[i];
        }
        
        for(int j=0; j<q; j++){
            cin >> arr1[j];
            if(arr1[j]<arr[0]) cout << arr1[j] << " ";
            else if(arr1[j]>=arr[0]) cout << arr[0]-1 << " ";
        }

        cout << "\n";
        
    }
}