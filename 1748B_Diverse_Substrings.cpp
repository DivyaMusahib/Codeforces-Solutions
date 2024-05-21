// my code
// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//     int t;
//     cin >> t;
//     while(t--){
//         int n;
//         cin >> n;
//         string s;
//         cin >> s;
//         long long ans =0;
//         for(int i=0; i<n; i++){
//             bool arr[10] = {0};
//             int count[10] = {0};
//             for(int j=i; j<n; j++){
//                 // if((arr[(int)s[j]-48])  == false){
//                     (arr[(int)s[j]-48]) = true;
//                 // }
//                 int unique = arr[0] +arr[1] +arr[2] + arr[3] + arr[4] + arr[5] + arr[6] + arr[7] + arr[8] + arr[9];
//                 count[(int)s[j]-48]++;
//                 int max = 0;
//                 for(int k=0; k<10; k++){
//                     if(count[k]>max) max = count[k];
//                 }
//                 if(max<=unique) ans++;
//                 // breaking is causing problem
//                 // else{
//                 //     break;
//                 // }
//             }
//         }
//         cout << ans << "\n";
//     }
// }



// by gpt -> less variable

#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t;
    cin >> t;
    
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        long long ans = 0;
        
        for(int i = 0; i < n; i++){
            int count[10] = {0}; 
            int unique = 0;
            int maxFreq = 0;
            
            for(int j = i; j < n; j++){
                int digit = s[j] - '0';
                
                if(count[digit] == 0) unique++;
                count[digit]++;
                
                if(count[digit] > maxFreq) maxFreq = count[digit];
                

                if(maxFreq > 10) break;
                
                if(maxFreq <= unique) ans++;
            }
        }
        
        cout << ans << "\n";
    }
    return 0;
}

