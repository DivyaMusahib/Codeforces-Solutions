#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    for(int i=0; i<t; i++){
        int n, k;

        cin >> n >> k;
        int sum =0;

        for(int j=0; j<k; j++){
            int arr[n];
            for(int l=0; l<n; l++){
                // int x;
                cin >> arr[l];
                if(l==(n-1)/2) {
                    sum = sum + arr[l];
                    cout << "The medians are " << arr[l] << "\n";
                }
            }
            
        }

        cout << "ANS is " << sum << "\n";
    }
}