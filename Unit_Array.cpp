#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int count1=0, countminus1=0, ans=0;
        int n;
        cin >> n;

        vector<int>arr(n);

        for(int i=0; i<n; i++){
            cin >> arr[i];
            if(arr[i]==1) count1++;
            else countminus1++;
        }

        int x = countminus1 - count1;
        int y = ceil(x/2);

        if(x<=0){
            if(countminus1%2==0) cout << 0 << " is the answer\n";
            else cout << 1 << " is the answer\n";
        } 
        else{
            if(countminus1%2==0) cout <<  y << " is the answer\n";
            else{
                if(y%2==0) cout << y + 1 << " is the answer\n";
                else cout << y << " is the answer\n";
            }
        }

    } 
    return 0;
}