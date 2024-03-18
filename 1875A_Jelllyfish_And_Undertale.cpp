//code - 5
#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin >> t;
 
    for(int i=0; i<t; i++){
        long long a,b,n;
        cin >> a >> b >> n;
        vector<long long>arr(n);
        long long sum = b;
        // int ans = 0;
        for(int j=0; j<n; j++){
            cin >> arr[j];
            sum += min(a-1,arr[j]);
        }
 
        cout << sum << "\n";
    }
    return 0;
}



//code - 4 
//logic yeh hai ki bomb ka timer abhi jo hai usme hum ith tool use karke usko bhada rahe hai
//par badhane ke baad agar woh a seconds se jyada hua toh a seconds ka timer set ho jayega
//toh sahi time tool use karne ka hoga jab 1 sec bacha ho tab ussey bhada do
// suppose a = 5 current is 3 aur tool use karke bhadega 3 but as i used tool now toh 3 sec already the usepe 3 add ho gaye that is 6 ho gaya which is greater than 5 toh set 5 ho jayega
//jabki agar 3 sec jo current ho useme 2 bit jaane do phir 3 add karo toh nuksaan nahi hoga

// #include<bits/stdc++.h>
// using namespace std;
 
// int main(){
//     int t;
//     cin >> t;
 
//     for(int i=0; i<t; i++){
//         long long a,b,n;
//         cin >> a >> b >> n;
//         vector<long long>arr(n);
//         int sum = b;
//         for(int j=0; j<n; j++){
//             cin >> arr[j];
//             if(arr[j]<=a-1) sum += arr[j];
//             else sum+= a-1;
//         }
 
//         cout << sum << "\n";
//     }
//     return 0;
// }



// code - 1
// #include<bits/stdc++.h>
// using namespace std;
 
// int main(){
//     int t;
//     cin >> t;
 
//     for(int i=0; i<t; i++){
//         int a,b,n;
//         cin >> a >> b >> n;
//         vector<int>arr(n);
//         int sum = b-1;
//         for(int j=0; j<n; j++){
//             cin >> arr[j];
//             if(arr[j]<=a) sum += arr[j];
//             else sum+= a;
//         }
 
//         cout << sum << "\n";
//     }
// }


// code - 2 pehele se isiliye alag alag hai bcoz i thought jab 'a'reach kar dega tab break ho jayega thats wjhy i sorted it
// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int t;
//     cin >> t;

//     for(int i=0; i<t; i++){
//         int a,b,n;
//         cin >> a >> b >> n;
//         vector<int>arr(n);
//         int sum = b-1;
//         for(int j=0; j<n; j++){
//             cin >> arr[j];
//         }
//         sort(arr.begin(),arr.end());

//         for(int k=0; k<n; k++){
//             if(arr[k]<=a) sum += arr[k];
//             else{
//                 sum+= a;
//                 break;
//             }
//         }

//         cout << sum << "\n";
//     }
// }



// code - 3 long long kar liya
// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int t;
//     cin >> t;

//     for(int i=0; i<t; i++){
//         long long a,b,n;
//         cin >> a >> b >> n;
//         vector<int>arr(n);
//         int sum = b-1;
//         for(int j=0; j<n; j++){
//             cin >> arr[j];
//         }
//         sort(arr.begin(),arr.end());

//         for(int k=0; k<n; k++){
//             if(arr[k]<=a) sum += arr[k];
//             else{
//                 sum+= a;
//                 break;
//             }
//         }

//         cout << sum << "\n";
//     }
// }