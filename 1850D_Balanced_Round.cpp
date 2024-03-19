#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n,x,count=1,max=1;
        cin >> n >> x;

        vector<int>arr(n);

        for(int j=0; j<n; j++){
            cin >> arr[j];
        }

        sort(arr.begin(),arr.end());

        for(int k=0; k<n; k++){
            if(k!=0){
                if(arr[k]-arr[k-1] <=x){
                    count = count + 1;
                }
                else{
                    if(count>max) max = count;
                    count=1;
                }
            }

            if(k==n-1 && count>max){
                max = count;
            }
        }

        cout << n-max<< "\n";

    }
}