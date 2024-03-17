// #include<stdio.h>
// int main(){
//     int t,a,b;
//     scanf("%d",&t);

//     for(int i=0; i<t; i++){
//         scanf("%d %d",&a,&b);
//         int count =0;
//         for(int j=1; j>0; j++){
//             if(a+10<=b && a<b){
//             a = a+10;
//             count++;
//             }
//             else if(a+10 > b && a<b){
//                 count++;
//                 a = b;
//                 break;
//             }
//             else if(a-10>=b && b<a){
//                 a = a-10;
//                 count++;
//             }
//             else if(a-10<b && b<a){
//                 count++;
//                 a = b;
//                 break; 
//             }

//             else if(a==b) break;

//         }
//         printf("Count is %d\n",count);

//     }

//     return 0;
// }


#include<bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin >> t;

    for(int i=0; i<t; i++){
        int a ,b;
        cin >> a >> b;
        int z = abs(a-b);

        if(z%10==0) cout << z/10 << "\n";
        else cout << z/10 + 1 << "\n";

        // previous method
        // if(a>b){
        //     cout << (a-b)/10 + 1 << "\n";
        // }
        // else if(a<b){
        //     cout << (b-a)/10 + 1 << "\n";
        // }
        // else if(a==b){
        //     cout << 0 << "\n";
        // }

    }

    return 0;
}