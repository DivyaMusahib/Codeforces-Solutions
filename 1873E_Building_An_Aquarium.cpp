#include <bits/stdc++.h>
#define ll long long
using namespace std;
 
void solve(){

    ll n,m;
    cin >> n >> m;
 
    vector<int>arr(n);
    for(ll i=0;i<n;i++){
        cin>>arr[i];
    }
 
    sort(arr.begin(),arr.end());
 
    ll low=1,high=100000000000,mid;
 
    while(low<=high){
        mid= (low+high) >> 1;
        ll sum=0;
        for(ll i=0;i<n;i++){
            if(arr[i] < mid) sum += (mid-arr[i]);
        }
        if(sum > m)        high = mid - 1;
        else if(sum < m)   low = mid + 1;
        else{
            cout<< mid << "\n";
            return;
        }
    }
    cout<<low-1<< "\n";
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}
 
 

// #include<bits/stdc++.h>
// #include<vector>
// using namespace std;

// int main(){
//     int t;
//     cin >> t;

//     while(t--){
//         int n,x;
//         cin >>n >> x;

//         vector<long long>arr(n);
//         for(int i=0; i<n; i++){
//             cin >> arr[i];
//         }

//         sort(arr.begin(),arr.end());
//         for(int i=0; i<n;i++) cout << arr[i] << " ";
//         cout << "\n";
//         long long sum =0;
//         long long ans=1,pointer=0;
//         while(pointer<n){
//             cout << "sum - " << sum << " ans - " << ans << " pointer - " << pointer <<"\n";
//             if(arr[ans]==arr[ans-1]) ans++;
//             else if(arr[ans]!=arr[ans-1]){
//                 sum += (arr[ans]-arr[ans-1])*(ans);
//                 if(sum>x){
//                     break;
//                 }
//                 pointer = ans;
//                 ans++;w
//             }
            
//         }

//         cout << arr[pointer] << " is ans\n";
//     }
// }

// h = 6, max = 9
// 23 , n = 7
// h *n - 23 = 19 => h--
// h *n - 23 = 12 => h--
// h *n - 23 = 5

// h = 1, max water = 10
// 3, n=3

// 1*n - 3 = 0 => h++
// 2*n - 3 = 3 => h++
