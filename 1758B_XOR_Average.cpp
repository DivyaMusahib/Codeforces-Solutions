#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t; 

    while(t--){
        int n;
        cin >> n;

        /* logic-
        if n is odd 1^1^1....n times will be 1 as 1^1=0 and also average will be 1
        if n is even take 1,3,2,2,2...n-2 times as 1^3 is 2 and avg(1,3) = 2 */

        if(n&1){
            while(n--){
                cout << 1 << " ";
            }
        }
        else{
            cout << "1 3 ";
            n = n-2;
            while(n--){
                cout << 2 << " ";
            }
        }
        cout << "\n";
    }
}