#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    for(int i=0; i<t; i++){
        int n;
        cin >> n;
        vector<int>arr(n-1);
        int sum =0;
        for(int j=0; j<n-1; j++){
            cin >> arr[j];
            sum = sum + arr[j];
        }

        cout << -sum << "\n";

    }

    return 0;
}


// logic
// 4E = t41 + t42 + t43 - (t14 + t24 + t34)

// 3E = t31 + t32 + t34 - (t13 + t23 + t43)
// 2E = t21 + t23 + t24 - (t12 + t32 + t42)
// 4E = t12 + t13 + t14 - (t21 + t31 + t41)

// 4E means efficiency of 4th team 
// txy means points when team x wins against y(x score ki y ke saamne)
// add them all kuch dikhega