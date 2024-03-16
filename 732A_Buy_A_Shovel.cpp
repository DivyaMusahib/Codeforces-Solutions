#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, k;
    cin >> n >> k;
    int count =0;

    for(int i=1; i<=10; i++){
        count++;
        if(i*n%10==0 || (i*n-k)%10==0){
            break;
        }
    }

    cout << count ;

    return 0;
}