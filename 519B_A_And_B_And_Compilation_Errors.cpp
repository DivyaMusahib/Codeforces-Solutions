#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    long long sumprev=0;
    for(int i=0; i<n;i++){
        long long x;
        cin >> x;
        sumprev += x;
    }

    long long sumnow=0;
    for(int i=0; i<n-1;i++){
        long long x;
        cin >> x;
        sumnow += x;
    }

    cout << sumprev-sumnow << "\n";

    sumprev= sumnow;
    sumnow=0;
    for(int i=0; i<n-2;i++){
        long long x;
        cin >> x;
        sumnow += x;
    }

    cout << sumprev-sumnow << "\n";
}