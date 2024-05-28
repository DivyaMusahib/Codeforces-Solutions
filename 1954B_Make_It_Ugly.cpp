#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int arr[n];
        for(int i=0; i<n; i++) cin >> arr[i];
        int ans = 1;
        if(arr[0]!=arr[n-1]) ans = 0;
        // for(int i=0,j=i+2; i<n-2; i=i+2){
        //     if(arr[i]!=arr[j]) ans = 0;
        // }

        // if(ans){
            int ansTemp = INT_MAX;
            int count = 0;
            for(int i=0; i<n; i++){
                if(arr[i]==arr[0]) count++;
                else{
                    ansTemp = min(count,ansTemp);
                    count = 0;
                }
            }
            ansTemp = min(count,ansTemp);
            ans = ansTemp;
        // }

        if(ans == n) ans = -1;

        cout << ans << "\n";
    }
}

// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int t;
//     cin >> t;
//     while(t--){
//         int n;
//         cin >> n;
//         int arr[n];
//         for(int i=0; i<n; i++) cin >> arr[i];
        
//         int k = arr[0];
//         int ans = 0;
//         if(n==1) ans = -1;
//         else if(n==2){
//             if(arr[0]==arr[1]) ans = -1;
//             else ans = 0;
//         }
//         else{
//             bool loopNahiTuta = true;
//             for(int i=0,j=i+2; i<n-2; i=i+2){
//                 if(arr[i]!=arr[j] && (arr[i+1]!=arr[i] && arr[j+1]!=arr[i+1])){
//                     loopNahiTuta = false;
//                     break;
//                 }
//             // cout << "else mien aaya tha";
//             }
//             if(loopNahiTuta){
//                 // cout << "loop nahi tuta mien aaya tha";
//                 int count = 0;
//                 for(int x = n-1; x>=0; x--){
//                     if(arr[x]!=k){
//                         ans = count;
//                         if(arr[0]!=arr[1]) ans = 1;
//                         break;
//                     }
//                     else{
//                         count++;
//                     }
//                 }
//                 if(count==n) ans = -1;
//             }
//         }

//         cout << ans << "\n";
//     }
// }