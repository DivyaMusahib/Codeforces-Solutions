#include<bits/stdc++.h>
using namespace std;

int num_of_digits(int n){
    int count = 0;
    for(int i=0; ; i++){
        if(n==0) break;
        else{
            n = n/10;
            count++;
        }
    }

    return count;
}

int main(){
    int t;
    cin >> t;

    for(int i=0; i<t; i++){
        int n;
        cin >> n;
        int extremeround =0;
        int num = num_of_digits(n);
        int power = pow(10,num-1); 

        /* num = 3
        eg - 123
        9 + 9 + 1 = 9*(num-1) + n/pow(10,num-1)

        eg - 289
        9 + 9 + 2

        num = 4
        eg - 1098
        9 + 9 + 9 + 1

        eg - 2890
        9 + 9 + 9 + 2

        num = 2
        eg - 45
        9 + 4

        eg - 23
        9 + 2 */

        cout << 9*(num-1) + n/power << "\n";

    }
    
    return 0;
}