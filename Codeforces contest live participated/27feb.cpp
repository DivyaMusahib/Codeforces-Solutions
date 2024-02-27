#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    for(int i=0; i<t; i++){
        int n;
        cin >> n;
        vector<int>arr(n);
        int count = 0;
        for(int j=0; j<n; j++){
            cin >> arr[j];
            if(arr[j]<=0) {
                arr[j] =-arr[j];
                count++;
            }
        }
        

        int sum =0;
        for(int k=0; k<n; k++){
            sum = sum + arr[k];
        }

    
      
            cout << sum << "\n";
        
    }
    return 0;
}