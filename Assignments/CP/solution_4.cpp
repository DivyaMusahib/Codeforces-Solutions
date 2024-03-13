#include<bits/stdc++.h>
using namespace std;

long long ans(long long a, long long b, long long m){
    if(b==0 && m!=1) return 1;
    else if(b==1) return a%m;

    else{
        int var = ans(a,b/2,m);

    }

}

int main(){
    long long a,b,m;
    cin >> a >> b >> m;

    //to find (a^b)%m we know it is equal to ((a%m)^b)%m
    long long answer = ans(a,b,m);

    cout << answer << "\n";

    return 0;
}