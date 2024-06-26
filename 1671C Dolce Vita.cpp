#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        int n,m;
        cin >> n >> m;
        vector<long long>arr(n);
        
        for(int i=0; i<n; i++) cin >> arr[i];
        sort(arr.begin(),arr.end());

        long long count = 0;
        for(int i=1; i<n; i++) arr[i] = arr[i] + arr[i-1];
    

        int temp = upper_bound(arr.begin(),arr.end(),m) - arr.begin() -1; 
        if(temp == -1){
        }
        else{
            for(int i=0; i<=temp; i++){
                count = count+  (m- arr[i])/(i+1) +1;
            }
        }
        
        // while(true){
        //     int temp = upper_bound(arr.begin(),arr.end(),m) - arr.begin() -1; 
        //     if(temp == -1) break;
        //     else if(temp==0){
        //         count = count + (m-arr[0]+1);
        //         break;
        //     }
        //     else{
        //         count = count+temp+1;
        //     }
        //     for(int i=0; i<n; i++){
        //         arr[i] = arr[i] + i +1;
        //     }
        // }

        cout << count << "\n";
    }
}