// #include<bits/stdc++.h>
// using namespace std;

// long long two_times(long long n,long long ans){
//     if(n/2>0){
//         n = n/2;
//         ans = ans * 2;
        
//         return two_times(n,ans);
//     }

//     else return ans;

// }

// int main(){
//     long long n,ans=1;
//     cin >> n;

//     long long count = two_times(n,ans);

//     cout << n - count + 1;
//     return 0;
// }




// #include<bits/stdc++.h>
// using namespace std;

// long long two_times(double n,long long ans){
//     if(n/2.0 >= 1){
//         n = n/2.0;
//         ans = ans * 2;
        
//         return two_times(n,ans);
//     }

//     else return ans;

// }

// int main(){
//     double n,ans=1;
//     cin >> n;

//     long long count = two_times(n,ans);

//     cout << n - count + 1;
//     return 0;
// }



#include<bits/stdc++.h>
using namespace std;

int main(){
    double n;
    long long ans=1;
    cin >> n;
    long long temp = n;

    // long long count = two_times(n,ans);

    for(int i=0; (n/2 >= 1); i++){
        n = n/2.0;
        ans = ans * 2;
        cout << n << " " << ans  << "\n";
    }

    cout << temp - ans + 1;
    return 0;
}