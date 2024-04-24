#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int a;
        cin >> a;
        char colour ;
        cin >> colour;

        string s;
        cin >> s;

        s = s+s;
        vector<long long>greenPos;
        for(int i=0; i<s.size(); i++){
            if(s[i]=='g'){
                greenPos.emplace_back(i);
            }
        }

        // for(int i=0; i<greenPos.size(); i++){
        //     cout << greenPos[i] << " ";
        // }

        // cout << "\n";

        long long max =0;
        long long x=0;
        for(int i=0; i<s.size(); i++){
            if(s[i]==colour){
                if((lower_bound(greenPos.begin(),greenPos.end(),i)-greenPos.begin())>greenPos.size()-1) break;
                else{
                x = greenPos[lower_bound(greenPos.begin(),greenPos.end(),i)-greenPos.begin()] - i;
                // cout << lower_bound(greenPos.begin(),greenPos.end(),i)-greenPos.begin() << endl;
                // cout << "x are ";
                // cout <<x << "\n";
                if(x>max) max = x;
                }
            }
        }


        cout << max << "\n";

    }
}



// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int t;
//     cin >> t;
//     while(t--){
//         int a;
//         cin >> a;
//         char colour ;
//         cin >> colour;

//         string s;
//         cin >> s;

//         s = s+s;
//         vector<long long>arr;
//         for(int i=0; i<s.size(); i++){
//             if(s[i]==colour){
//                 for(int j=i; j<s.size(); j++){
//                     if(s[j]=='g'){
//                         arr.push_back(j-i);
//                         break;
//                     }
//                 }
//             }
//         }

//         long long max =0;
//         for(int i=0; i<arr.size(); i++){
//             if(arr[i]>max) max = arr[i];
//         }

//         cout << max << "\n";

//     }
// }

