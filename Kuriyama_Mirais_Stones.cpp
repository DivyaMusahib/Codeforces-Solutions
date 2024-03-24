#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    cin >> n;

    vector<int>arr(n);
    vector<int>will_sort_arr(n);

    for(long long i=0; i<n; i++){
        cin >> arr[i];
        will_sort_arr[i]=arr[i];
    }

    sort(will_sort_arr.begin(),will_sort_arr.end());

    long long m;
    cin >> m;

    for(long long j=0; j<m; j++){
        long long t, l, r;
        cin >> t >> l >> r;

        if(t==1){
            long long sum =0;
            for(long long k=l-1; k<r; k++){
                sum += arr[k];
            }
            cout << sum << "\n";
        }

        if(t==2){
            long long sum =0;
            for(long long k=l-1; k<r; k++){
                sum += will_sort_arr[k];
            }
            cout << sum << "\n";
        }

    }

    return 0;
}



// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     long long n;
//     cin >> n;

//     vector<int> arr(n);
//     vector<int> will_sort_arr(n);

//     for(long long i = 0; i < n; i++){
//         cin >> arr[i];
//         will_sort_arr[i] = arr[i];
//     }

//     sort(will_sort_arr.begin(), will_sort_arr.end());

//     // Creating a prefix sum array for the original array
//     vector<long long> prefix_sum(n + 1, 0);
//     for(long long i = 0; i < n; i++) {
//         prefix_sum[i + 1] = prefix_sum[i] + arr[i];
//     }

//     long long m;
//     cin >> m;

//     for(long long j = 0; j < m; j++){
//         long long t, l, r;
//         cin >> t >> l >> r;

//         if(t == 1){
//             // Calculate the sum using prefix sum array
//             cout << prefix_sum[r] - prefix_sum[l - 1] << "\n";
//         }
//         if(t == 2){
//             // Find the sum from the sorted array
//             long long sum = 0;
//             for(long long k = l - 1; k < r; k++){
//                 sum += will_sort_arr[k];
//             }
//             cout << sum << "\n";
//         }
//     }

//     return 0;
// }