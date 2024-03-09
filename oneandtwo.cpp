#include<bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin >> t;

    for(int i=0;i<t; i++){
        int n;
        cin >> n;

        vector<int>arr(n);
        int mul_1=1 ,mul_2=1;;
        for(int j=0; j<n; j++){
            cin >> arr[j];
        }
        int count = 0;
        int ans;

        for(int k=0; k<n; k++){
            mul_1 = mul_1 * arr[k];
            mul_2 = mul_2 * arr[n-1-k];

            if(mul_1==mul_2){
                count ++;
                ans = k;
                break;
            }
        }



        if(count==0) cout << "ans -1\n";
        else cout << ans << "ans \n";
    }

    return 0;
}