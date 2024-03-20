// #include<stdio.h>
// int main(){
//     int t;
//     scanf("%d",&t);

//     for(int i=0; i<t; i++){
//         int x,y,n;
//         scanf("%d %d %d",&x, &y, &n);
//         // k % x= y, k<=n
//         for(int j=n; j>=0; j--){
//             if((j % x) == y ){
//             printf("%d\n",j);
//             break;
//             }
//         }

//     }
//     return 0;
// }

// in previous code ie this code time complexity is O(n) but new code has time complexity O(1) 


#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t; 

    for(int i=0; i<t; i++){
        int x,y,n;
        cin >> x >> y >> n;

        // (max)n = (w)x + y
        // w is some whole number integer

        int del = n - y;
        int sub = del % x;

        int ans = n - sub;

        cout << ans << "\n";
    }
}