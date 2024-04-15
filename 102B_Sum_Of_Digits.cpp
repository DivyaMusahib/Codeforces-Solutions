#include<bits/stdc++.h>
using namespace std;

long long sumOfDigits(long long sum, long long n){
    n = 0;
    while(sum/10 != 0){
        n = n + sum%10;
        sum = sum/10;
    }
    n = n+sum;
    return n;
}

int main(){
    string s;
    cin >> s;

    long long count = 0,sum =0;
    if(s.size()==1) cout << 0;
    else{
    for(int i=0; i<s.length(); i++){
        sum += s[i] - '0';
    }

    int n=0;

    while(sum>=10){
        int ans = sum;
        sum = sumOfDigits(ans,n);
        count++;
    }

    cout << count+1;
    }

}