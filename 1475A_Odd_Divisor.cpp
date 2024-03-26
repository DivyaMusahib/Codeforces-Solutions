///The question ask whether a number has a odd divisor or not
//logic --> even * even = even , even*odd = even, odd*odd=odd
//to check whether a number has a divisor which is odd or not
//any number can be represented as power of primes ---> 2^p * 3^q * 5^r_____
//m-1 check if log n base to is integer or not if it is integer means all the divisor of n are 2 means no odd divisor
//m-2 divide n by 2 each time if some odd integer comes means n have odd divisor else dividing it by 2 continously gives 1 at end means no odd divisor TC-O(Log n)
//m-3 bitwise and subtract  1 of 2 to the power any number will be zero TC - O(1) ------> if n & n-1 is zero i is power of 2

// Method - 2
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    for(int i=0; i<t; i++){
        long long n;
        cin >> n;

        for(int j=0; ; j++){
            if(n%2!=0 && n!=1){
                cout << "YES\n";
                break;
            }
            else{
                if(n==1){
                    cout << "NO\n";
                    break;
                }
                n=n/2;
            }
        }
    }
    
    return 0;
}




//old wrong code
// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int t;
//     cin >> t;

//     for(int i=0; i<t; i++){
//         int n,count=0;
//         cin >> n;

//         for(int j=2; j<=n; j++){
//             if(n%j==0 && j%2!=0){
//                 count++;
//                 cout << j<<endl;
//                 break;
//             }
//             else continue;
//         }

//         if(count==1) cout << "YES\n";
//         else if(count==0)cout << "NO\n";
//     }
// }