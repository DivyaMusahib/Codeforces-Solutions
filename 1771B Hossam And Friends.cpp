#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    
    int t;
    cin >> t;
    
    while (t--) {
        int n, m;
        cin >> n >> m;

        vector<int> max_bad_end(n + 1, n + 1); // Initialize max_bad_end with n+1
        
        vector<pair<int, int>> unjaan;
        int x, y;
        for (int i = 0; i < m; i++) {
            cin >> x >> y;
            if (y < x) swap(x, y);
            unjaan.push_back({x, y});
        }
        
        // Sort unjaan pairs
        sort(unjaan.begin(), unjaan.end());

        // Set max_bad_end based on unjaan pairs
        for (auto &p : unjaan) {
            max_bad_end[p.first] = min(max_bad_end[p.first], p.second);
        }

        // Propagate the earliest bad end to the left
        for (int i = n - 1; i >= 1; i--) {
            max_bad_end[i] = min(max_bad_end[i], max_bad_end[i + 1]);
        }

        long long ans = 0;
        // Count good subsegments
        for (int i = 1; i <= n; i++) {
            ans += max_bad_end[i] - i;
        }

        cout << ans << "\n";
    }

    return 0;
}


// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//     int t;
//     cin >> t;

//     vector<pair<int,int>>arr(100001);
//     for(int i=0;i<arr.size(); i++) arr[i].first = i;
    
//     while(t--){
//         int n,m;
//         cin >> n >> m;

//         vector<pair<int,int>>unjaan;
//         int x,y;
//         for(int i =0; i<m; i++){
//             cin >> x >> y;
//             if(y<x) swap(x,y);
//             unjaan.push_back({x,y});
//         }
        
//         sort(unjaan.begin(),unjaan.end());

//         long long ans = 1;
//         for(int i=1; i<=n; i++){
//             int temp = -1;
//             int low = 0, high = unjaan.size()-1;
//             while(low <= high){
//                 int mid = low + (high-low)/2 ;
//                 if(unjaan[mid].first ==i){
//                     temp = mid;
//                     high = mid - 1;
//                 }
//                 else if(unjaan[mid].first < i){
//                     low = mid + 1;
//                 }
//                 else{
//                     high = mid -1;
//                 }
//             }

//             if(temp == -1) arr[i].second = n+1;
//             else arr[i].second = unjaan[temp].second;
//         }

//         // for(int i=1; i<=n; i++){
//         //     cout << "{ " << arr[i].first << " , " << arr[i].second << " }\n";
//         // }


//         // cout << "this is unjaan\n";
//         // for(int i=0;i<unjaan.size(); i++){
//         //     cout << unjaan[i].first << " " << unjaan[i].second << "\n";
//         // }

//         for(int i=1; i<n; i++){
//             // cout << ans << "\n";
//             int j = arr[i].second;
//             // cout << i << "-> i " << j << "->j\n";
//             int k = i+1;
//             for(; k<=j && k != (n+1); k++){
//                 // if(j== n+1) break;
//                 if(arr[k].second < j){
//                     j = arr[k].second;
//                     break;
//                 }
//             }
//             ans += j-i;
//             // cout << i << "-> i " << j << "->j\n";
//             // cout << i << "-> i " << j << "->j " << ans << "\n";
//         }

//         cout << ans << "\n";
//     }
// }