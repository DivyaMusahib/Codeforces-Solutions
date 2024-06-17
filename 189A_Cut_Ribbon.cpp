#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    vector<int> arr(3);
    cin >> n >> arr[0] >> arr[1] >> arr[2];
    sort(arr.begin(), arr.end());

    int ans = INT_MIN;
    // ax + by + cz = n
    for (int x = 0; x <= (n / arr[0]); x++) {
        for (int y = 0; y <= (n / arr[1]); y++) {
            int k = n - arr[0] * x - arr[1] * y;
            if (k >= 0 && k % arr[2] == 0) {
                int z = k / arr[2];
                ans = max(ans, x + y + z);
            }
        }
    }

    cout << ans << endl;
    return 0;

    // int temp = n/arr[0] + 1;
    // if(n%arr[0] == 0) cout << n/arr[0];
    // else{
    //     int x = 0, y=0, z=0;
    //     int ans = INT_MIN;
    //     for(int x =0; x<=(n/arr[0]); x++){
    //         for(int y=0; y<=(n/arr[1]); y++){
    //             for(int z=0; z<=(n/arr[2]); z++){
    //                 if((n- arr[0]*x - arr[1]*y - arr[2]*z) == 0){
    //                     ans = max(ans, x+y+z);
    //                 }
    //             }
    //         }
    //     }
    //     cout << ans ;
    // }

}
