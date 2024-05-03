#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;

    while(t--){
        int n,m;
        cin >> n >> m;
        vector<long long>arr1(n);    
        vector<long long>arr2(m);

        for(int i=0; i<n; i++) cin >> arr1[i];
        for(int j=0; j<m; j++) cin >> arr2[j];

        long long sum =0;
        
        for(int i=0 ; i<m ; i++){
            sort(arr1.begin(),arr1.end());
            arr1[0]=arr2[i];
        }

        for(int i=0; i<n; i++) sum += arr1[i];

        cout << sum << "\n";
    }
}



// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int t; cin >> t;

//     while(t--){
//         int n,m;
//         cin >> n >> m;
//         vector<long long>arr1(n);    
//         vector<long long>arr2(m);
//         long long sumn=0, summ=0,ans=0;

//         for(int i=0; i<n; i++){
//             cin >> arr1[i];
//             sumn += arr1[i];
//         }

//         for(int j=0; j<m; j++){
//             cin >> arr2[j];
//             summ += arr2[j];
//         }
//         sort(arr1.begin(),arr1.end());
//         sort(arr2.begin(),arr2.end());

//         if(n>=m){
//             ans += summ + sumn;
//             for(int k=0; k<m; k++){
//                 ans = ans - arr1[k];
//             }
//         }
//         else if(n<m){
//             for(int l=m-1; l>=m-n; l--){
//                 ans = ans + arr2[l];
//             }
//         }

//         cout << ans << "\n";
//     }
// }