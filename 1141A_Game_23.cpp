#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin >>n >>m;

    if(m<n || m%n!=0) cout << -1 << endl;
    else{
        long long count =0;
        bool answer = true;
        long long ans = m/n;

        while(ans){
            if(ans%3==0){
                ans = ans/3;
                count++;
            }
            else if(ans%2==0){
                ans = ans / 2;
                count++;
            }
            else if(ans == 1){
                break;
            }
            else{
                answer = false;
                cout << -1 << endl;
                break;
            }

        }
        if(answer == true) cout << count << endl;
    }
    return 0;
}