#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    for(int i=0; i<t; i++){
        int n,count=0;
        cin >> n;
        vector<int>arr(n);
        vector<int>continouscount;
        for(int i=0; i<n; i++){
            cin >> arr[i];
            if(arr[i]==0) count++;
            else if(arr[i]==1){
                continouscount.push_back(count);
                count =0;
            }
        }
            // Handling the case where the sequence ends with 0s
            if (arr[n - 1] == 0) continouscount.push_back(count);

        int max = continouscount[0];
        for(int j=0; j<continouscount.size(); j++ ){
                if(continouscount[j]>max) max = continouscount[j];
        }

        cout << max << "\n";

    }

    return 0;
}