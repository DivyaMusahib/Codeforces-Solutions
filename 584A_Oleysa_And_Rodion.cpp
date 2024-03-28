// logic any number of n digits will be divisble by t which is between 2 to 10 except one exception when n is 1 and t is 10
// so printing t --> n timesif t!=10

#include<bits/stdc++.h>
using namespace std;
 
int main() {
    long long n,t;
    cin >> n >> t;

    if(n==1 && t==10) cout << "-1";
    else{
        if(t!=10){
            for(int i=1; i<=n; i++){
                cout << t;
            }
        }

        else if(t==10){
            cout << 1;
            for(int i=1; i<=n-1; i++){
                cout << 0;
            }
        }
    }

    return 0;
}



// old code

// #include<bits/stdc++.h>
// using namespace std;
 
// int main() {
//     long long n,t;
//     cin >> n >> t;

//     // long long x = pow(10,n) - 1;
//     // long long y = pow(10,n-1);
//     // pow function may result in precision error at larger values

//     long long maxi = 1;
//     for(int i = 1; i<=n; i++){
//         maxi = maxi * 10;
//     }
 
//     long long mini = maxi/10;
//     maxi = maxi-1;

//     long long ans = maxi - (maxi % t);


//     if(ans >= mini) cout << ans;
//     else cout << -1;

//     return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;
 
// int main() {
//     long long n,t;
//     cin >> n >> t;

//     long long maxi = 1;
//     for(int i = 1; i<=n; i++){
//         maxi = maxi * 10;
//     }
 
//     long long mini = maxi/10;
//     long long ans = -1;
    
//     long long k = maxi % t;

//     if(k!=0 && (maxi-k)>=mini){
//         ans = maxi-k;
//     }
//     else if(k==0 && (maxi-t)>=mini){
//         ans = maxi - t;
//     }
    
//     cout << ans;
 
//     return 0;
// }
