#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        string s;
        cin >> s;

        int count0 =0, count1=0, i=0;
        while(i<s.length()){
            if(s[i]=='0') count0++;
            else count1++;
            i++;
        }

        int ans = min(count0,count1);

        if(ans&1) cout << "DA\n";
        else cout << "NET\n";

    }
}

// wrong approach -- in case 0011 first move will be delting the 01 which we counted but not checked after that one new pair of 01 will be formed
// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int t;
//     cin >> t;

//     while(t--){
//         string s;
//         cin >> s;

//         int count =0,i=1;
//         while(i<s.length()){
//             if(s[i]==s[i-1]){
//                 i++;
//             }
//             else{
//                 count++;
//                 i += 2;
//             }
//         }

//         cout << count << "\n";

//     }
// }