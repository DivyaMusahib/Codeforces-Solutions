#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin >> n >> m;

    int ans = 0;

    for(int i=1; i<=n; i++){
        ans++;
        if(i%m==0) n++;
    }

    cout << ans ;

    return 0;
}



//old codes
// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int n,m;
//     cin >> n >> m;

//     int ans = n + (n/m);
//     if(ans/m > n/m) ans++;
//     cout << ans ;

//     return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int n,m;
//     cin >> n >> m;

//     int ans = n + n/m;

//     for(int i=0; ; i++){
//         float k = ans-n;
//         if(k/m > 0){
//             cout << ans << endl;
//             n = ans;
//             ans = ans + k/m;
//         }

//         // else if(k/(float)m>0 && k/(float)m<1){
//         //     ans ++;
//         //     break;
//         // }
//         else break;
//     }

//     cout << ans ;


//     return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int n,m;
//     cin >> n >> m;

//     int ans = n + n/m;

//     for(int i=0; ; i++){
//         float k = ans-n;
//         if((int)k/m > 0){
//             cout << ans << endl;
//             n = ans;
//             ans = ans + k/m;
//         }

//         else if(k/m > 0){
//             cout << ans << endl;
//             ans = ans + 1;
//             break;
//         }

//         else break;
//     }

//     cout << ans ;


//     return 0;
// }
