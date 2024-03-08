#include<bits/stdc++.h>
using  namespace std;

int main(){
    int n;
    cin >> n;

    if(n%4==0 || n%7==0 || n%44==0 || n%47==0 || n%74==0 || n%77==0 || n%444==0 || n%447==0 || n%474==0 || n%477==0 || n%744==0 || n%747==0 || n%774==0 || n%777==0 ) cout << "YES";
    else cout << "NO";
}

//method 2
// int main(){
//     int n;
//     cin >> n;
//     int arr[14] = {4, 7, 44, 47, 74, 77, 444, 447, 474, 477, 744, 747, 774, 777};
//     int count =0;

//     for(int i=0; i<14; i++){
//         if(n%arr[i]==0){
//             count++;
//             break;
//         }
//     }

//     if(count==0) cout << "NO";
//     else cout << "YES";
// }