#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >>t;
    while(t--){
        long long x,y,k,count=0;
        cin >> x >> y >> k;

        long long minrequiredstick= y*k + k;
        count += k;
        long long temp1 = (minrequiredstick-1);
        long long temp2 = (x-1);
        if(temp1 % temp2==0) count += temp1/temp2;
        else count += (temp1/temp2) + 1;

        cout << count << endl;
    }
}