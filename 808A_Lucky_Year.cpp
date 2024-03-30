#include<bits/stdc++.h>
using namespace std;

int numofdigits(int n,int k){
    if((n/10)!=0){
        k++;
        n= n/10;
        return numofdigits(n,k);
    }
    else return k;
}

int main(){
    long long n,k=0;
    cin >> n;

    int num = numofdigits(n,k) + 1;
    
    long long firstdigit = n;
    for(int i=0; i<num-1; i++){
        firstdigit /= 10;
    }

    long long sol = firstdigit+1;
    for(int j=0; j<num-1; j++){
        sol *= 10;
    }

    long long ans = sol-n;
    cout << ans;

}