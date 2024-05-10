#include<bits/stdc++.h>
#define ll long long
#define loop(i,a,b) for(int i=a; i<b; i++)
using namespace std;

int main(){

    #ifndef ONLINE_JUDGE 
    freopen("input.txt", "r", stdin); 
    freopen("output.txt", "w", stdout); 
    #endif 


    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;

        int count =1;
        int c01 = 0;

        for(int i=1; i<s.size(); i++){
            if(s[i-1]==s[i]){
                continue;
            }
            else count++;
            if(s[i-1]=='0' && s[i]=='1') c01=1;
        }

        int ans = count - c01;

        cout << ans << "\n";

    }
}


// ------------
// contest code

// #include<bits/stdc++.h>
// #define ll long long
// #define loop(i,a,b) for(int i=a; i<b; i++)
// using namespace std;

// int main(){

//     #ifndef ONLINE_JUDGE 
//     freopen("input.txt", "r", stdin); 
//     freopen("output.txt", "w", stdout); 
//     #endif 


//     int t;
//     cin >> t;
//     while(t--){
//         string s;
//         cin >> s;

//         string k =s;
//         sort(k.begin(),k.end());
//         if(s==k) cout << 1 << "\n";
//         else{
//             int has01 = 0;
//             int count =0;
//             for(int i=0; i<s.size();i++){
//                 if(s[i]=='1' && s[i+1]=='0') count++;
//                 else if(s[i]=='0' && s[i+1]=='1'){
//                     if(has01>0) count++;
//                     else{
//                         has01++;
//                     }
//                 }
//                 // cout << count << " ";
//             }

//             if(s[s.size()-1]== '0' && s[s.size()-2]== '1' ) count++;
//             if(s[s.size()-1]== '0' && s[s.size()-2]== '0' ) count++;
//             if(s[s.size()-1]== '1' && s[s.size()-2]== '0' ) count++;

//             // cout << " hii ";

//             cout << count << "\n";
//         }

//     }
// }
