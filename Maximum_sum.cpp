#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t;
    cin >> t;

    while(t--){
        int n,k;
        cin >> n >> k;
        long long sum = 0;
        int arr[n];
        for(int i=0; i<n; i++) cin >> arr[i];
        
        sort(arr,arr+n);
        for(int i=0; i<n; i++) cout << arr[i] << " ";
        cout << "\n";
        int i = 0, j = n-1;
        while(k--){
            if((arr[i]+arr[i+1]) < arr[j]){
                i =i+2;
            }
            else{
                j--;
            }
        }
        for(;i<=j; i++){
            sum+= arr[i];
        }

        cout << sum << "\n";

    }
}