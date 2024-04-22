#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        long long n;
        cin >> n;
        long long count =0;
        while(n>1){

            long long m = (-1 + sqrt(1+24*n))/6;
            long long x = (m*(3*m+1))/2;
            n =n-x;
            count++;
        }
        cout << count << "\n";
    }
}


// #include<bits/stdc++.h>
// using namespace std;
// long long minLowerBound(vector<long long>arr, long long n, int count){
//     int low=0, high = arr.size()-1;
//     int mid = (low+high)/2;

//     if(n>1){
//     while(high >= low){
//         if(arr[mid]==n){
//             count++;
//             n = n- arr[mid];
//             return count;
//             break;}
//         else if(arr[mid]>n){
//             high = mid-1;
//         }
//         else if(arr[mid]<n){
//             low = mid+1;
//         }
    
//     }

//             n = n- arr[high];
//             count++;
//             return minLowerBound(arr,n,count);
//     }
//     else return count;
// }

// int main(){
//     vector<long long>arr;
//     for(int i=1; i<100000; i++){
//         long long temp = 3 * i*i + i;
//         if(temp%2==0) arr.emplace_back(temp/2);
//     }
//     int t;
//     cin >> t;

//     while(t--){
//         long long n;
//         cin >> n;
//         int count =0;
//         int ans = minLowerBound(arr,n,count);
//         cout << ans << " is the answer\n";
//     }
// }





// #include<bits/stdc++.h>
// using namespace std;


// int main(){
//     vector<long long>arr;
//     for(int i=1; i<100000; i++){
//         long long temp = 3 * i*i + i; // solve this using quadratic
//         if(temp%2==0) arr.emplace_back(temp/2);
//     }
//     int t;
//     cin >> t;

//     while(t--){
//         long long n;
//         cin >> n;
//         int count =0;
//         // while(n>1){
             
//             cout << lower_bound(arr.begin(),arr.end(),n)-arr.begin();
//             // cout << n << endl;
//             count ++;
//         // }
//         // cout << count << " is the answer\n";
//     }
// }