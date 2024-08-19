#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n, k, x;
    cin >> n >> k >> x;
    
    vector<long long> arr(n);
    vector<long long> diff;
    
    for (auto &it : arr) cin >> it;
    sort(arr.begin(), arr.end());
    
    long long ans = 1;  // Initial number of groups
    long long temp = 0;
    
    for (int i = 1; i < n; i++) {
        if (arr[i] - arr[i - 1] > x) {
            ans++;  // Increment number of groups if difference > x
            diff.emplace_back(arr[i] - arr[i - 1]);
        }
    }
    
    sort(diff.begin(), diff.end());
    
    for (int i = 0; i < diff.size(); i++) {
        long long needed = (diff[i] + x - 1) / x - 1;  // Equivalent to ceil(diff[i]/x) - 1
        if (k >= needed) {
            k -= needed;
            temp++;
        } else {
            break;
        }
    }
    
    cout << max(1LL, ans - temp) << endl;  // Ensures minimum group count is 1
    
    return 0;
}


// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     long long n,k,x;
//     cin >> n >> k >> x;
//     long long ans = 1;
//     long long temp = 0;
//     int arr[n];
//     vector<long long>diff;
//     for(auto &it : arr) cin >> it;
//     sort(arr,arr+n);
//     for(int i=1; i<n; i++) {
//         if(arr[i]-arr[i-1] > x){
//             ans ++;
//             diff.emplace_back(arr[i]-arr[i-1]);
//         }
//     }
//     sort(diff.begin(),diff.end());

//     for(int i=0 ; i<diff.size() ; i++){
//         k -= (ceil((float)diff[i]/x) - 1 );
//         if(k>=0) temp++;
//         else break;
//     }

//     (ans-temp >=1 ) ? cout << ans-temp : cout << 1; // correct
//     // cout << ((ans-temp >=1 ) ? ans-temp :  1); // correct because use of braces 
    
//     // cout << (ans-temp >=1 ) ? ans-temp :  1; // Incorrect 
//     // The expression cout << (ans-temp >=1 ) ? ans-temp : 1; attempts to combine the ternary operator with the cout stream. However, this approach is actually incorrect and can lead to unexpected behavior due to operator precedence.

// }