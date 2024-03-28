#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    for(int i=0;i<t; i++){
        int n;
        cin >> n;

        vector<int>arr(n);
        int count_2 = 0;

        for(int j=0; j<n; j++){
            cin >> arr[j];
            if(arr[j]==2) count_2++;
        }

        if(count_2 % 2 != 0) cout << -1 << "\n";
        else{
            int temp = 0;
            for(int k=0; k<=n-1; k++){
                if(arr[k]==2) temp++;
                if(temp == count_2/2){
                    cout << k + 1 << "\n";
                    break;
                } 
            }
        }
    }
    return 0;
}

//old code
//logic failure - when there is n=1000 and suppose all are 2 then  2^1000 will be 301 digits long ,storing that will not be possible

// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int t;
//     cin >> t;

//     for(int i=0;i<t; i++){
//         int n;
//         cin >> n;

//         vector<int>arr(n);
//         long long mul_1=1 ,mul_2=1;;

//         for(int j=0; j<n; j++){
//             cin >> arr[j];
//             mul_2 *= arr[j];
//         }

//         bool check = false;
//         int ans = 0;

//         for(int k=0; k<n-1; k++){
//             mul_1 = mul_1 * arr[k];

//             if(mul_1 == mul_2/mul_1){
//                 ans = k+1;
//                 check = true;
//                 break;
//             }
//         }


//         if(check==false) cout << "-1\n";
//         else cout << ans << "\n";
//     }

//     return 0;
// }