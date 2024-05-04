#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n,k;
        cin >> n >> k;

        vector<pair<long long, long long>>arr(n);
        for(int i=0; i<n; i++){
            cin >> arr[i].first;
            arr[i].second = i;
        }        
        int maxi = arr[k-1].first;
        int ans=0;
        for(int i=0; i<n; i++){
            if(arr[i].first>arr[k].first){
                if(i>k) ans = i -k;
                else ans = 
            }
        } 
    }
}


// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int t;
//     cin >> t;

//     while(t--){
//         int n,k;
//         cin >> n >> k;

//         vector<pair<long long, long long>>arr(n);
//         for(int i=0; i<n; i++){
//             cin >> arr[i].first;
//             arr[i].second = i;
//         }

//         int myCowRating = arr[k-1].first;

//         sort(arr.begin(),arr.end());

//         int find = upper_bound(arr.begin(),arr.end(),myCowRating) - arr.begin();

//         int ans;
        

//     }
// }