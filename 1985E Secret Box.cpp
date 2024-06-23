#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while(t--){
        long long arr[3];
        for(int i=0; i<3;i++){
            cin >> arr[i];
        }
        sort(arr,arr+3);
        long long k; cin >> k;
        long long maxi = 0;
        for(int A=1; A<=arr[2]; A++){
            for(int B=1; B<=arr[1]; B++){
                if(k % (A*B) == 0 && k/(A*B) <= arr[0]){
                    long long temp = (arr[2]-A+1)*(arr[1]-B+1)*(arr[0]- (k/(A*B))+1);
                    maxi = max(maxi, temp);
                }
            }
        }
        cout << maxi << "\n";
    }
}