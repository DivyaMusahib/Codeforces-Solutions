#include<bits/stdc++.h>
using namespace std;

long long solve(long long count, long long n){
    long long sum =0;
    for(int i=0; ; i++){
        if(n/10==0){
            sum += n;
            break;
        }
        else{
            sum += n%10;
            n = n/10;
        }
    }
    count++;
    if(sum<10){
        // count++;
        return count;
    }
    else return solve(count,sum);
}

int main(){
    long long n;
    cin >> n;

    long long count = 0;

    long long ans = solve(count,n);
    if(n<10) cout << 0;
    else cout << ans;
}