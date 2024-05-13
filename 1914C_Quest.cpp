#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin >> n >> k;
        vector<int>arr1(n+1);
        vector<int>arr2(n+1);
        vector<int>prefixmax2(n+1);
        arr1[0]=0, arr2[0]=0;

        for(int i=1; i<=n; i++){
            cin >>arr1[i];
            arr1[i] += arr1[i-1];

        }

        for(int i=1; i<=n; i++){
            cin >>arr2[i];
            if(i==1) prefixmax2[i]=arr2[i];
            else{
                prefixmax2[i] = max(arr2[i],prefixmax2[i-1]);
            }
        }
        
        
        ll ans = 0;
        for(int i = 1; i <= min(k, n); i++) {
            ll cur = prefixmax2[i] * (k - i) + arr1[i];
 
            ans = max(ans, cur);
        }
        cout << ans << "\n";        
    }

}

// // #include<bits/stdc++.h>
// // typedef long long ll;
// // using namespace std;

// // int main(){
// //     int t;
// //     cin >> t;
// //     while(t--){
// //         int n,k;
// //         cin >> n >> k;
// //         vector<int>arr1(n);
// //         vector<int>arr2(n);
// //         vector<int>prefixmax2(n);

// //         for(int i=0; i<n; i++){
// //             cin >>arr1[i];
// //         }

// //         for(int i=0; i<n; i++){
// //             cin >>arr2[i];
// //             if(i==0) prefixmax2[i]=arr2[i];
// //             else{
// //                 prefixmax2[i] = max(arr2[i],prefixmax2[i-1]);
// //             }
// //         }
// //         ll ans =0;
// //         int reached =0;
// //         for(int i=0; i<k; i++){
// //             if(i>n-1) ans+= prefixmax2[reached-1];
// //             else{
// //                 if(i==0){
// //                     ans += arr1[0];
// //                     reached++;
// //                 }
// //                 else{
// //                     ans += max(arr1[reached],prefixmax2[reached-1]);
// //                     if (arr1[reached] >= prefixmax2[reached-1]){
// //                         reached++;
// //                     }
// //                 }
// //             }
// //         }

// //         cout << ans << "\n";
// //     }
// // }



// // #include<bits/stdc++.h>
// // typedef long long ll;
// // using namespace std;

// // int main(){
// //     int t;
// //     cin >> t;
// //     while(t--){
// //         int n,k;
// //         cin >> n >> k;
// //         vector<int>arr1(n);
// //         vector<int>arr2(n);
// //         vector<int>prefixmax2(n);

// //         for(int i=0; i<n; i++){
// //             cin >>arr1[i];
// //         }

// //         for(int i=0; i<n; i++){
// //             cin >>arr2[i];
// //             if(i==0) prefixmax2[i]=arr2[i];
// //             else{
// //                 prefixmax2[i] = max(arr2[i],prefixmax2[i-1]);
// //             }
// //         }
// //         ll ans =0;
// //         int reached =0;
// //         for(int i=0; i<k; i++){
            
// //             if(i==0){
// //                 ans += arr1[0];
// //                 reached++;
// //             }
// //             else{
// //                 if(reached<n){
// //                 ans += max(arr1[reached],prefixmax2[reached-1]);
// //                 if (arr1[reached] >= prefixmax2[reached-1]){
// //                     reached++;
// //                 }
// //                 }
// //                 else{
// //                     ans += prefixmax2[reached-1];
// //                 }
// //             }
// //         }


// //         cout << ans << "\n";
// //     }
// // }


