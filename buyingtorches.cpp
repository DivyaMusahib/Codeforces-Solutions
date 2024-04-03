#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >>t;
    while(t--){
        long long x,y,k,count=0;
        cin >> x >> y >> k;

        long long minrequiredstick= y*k + k;
        count += k;
        cout << count << "\n";
        count += ceil((minrequiredstick-1)/(x-1.0));

        cout << count;
    }
}