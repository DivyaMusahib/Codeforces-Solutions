#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t;
    cin >> t;

    while(t--){
        int n,q;
        cin >> n >> q;

        int arr[n];
        for(int i=0; i<n; i++) cin >> arr[i];

        int temp;

        int mini = INT_MAX;
        for(int i=0; i<q; i++){
            cin >> temp;
            if(temp<mini){
                for(int j=0; j<n; j++){
                    // cout << arr[i]<< " ";
                    if(arr[j]% (int)(pow(2,temp))  ==0){
                        arr[j] += pow(2,temp-1);
                    }

                }
            }
            mini = min(temp,mini);   
        }
        for(int i=0; i<n; i++) cout << arr[i] << " ";        
        cout << "\n";
    }
}