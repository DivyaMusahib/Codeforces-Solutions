#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    vector<ll>pub;
    ll x = 5;
    ll last = 0;
    for(ll i=5 ; i<=1e10; ){
        pub.emplace_back(last + x);
        last = last + x;
        x *=2;
        i = last + x;
    }
    ll n; cin >> n;
    if(n<=5){
        if(n==1) cout << "Sheldon";
        if(n==2) cout << "Leonard";
        if(n==3) cout << "Penny";
        if(n==4) cout << "Rajesh";
        if(n==5) cout << "Howard";
        
    }
    else {
        ll lbb = lower_bound(pub.begin(),pub.end(),n)-pub.begin();
        ll lb = pub[lbb-1];
        ll ub = upper_bound(pub.begin(),pub.end(),n) - pub.begin();
        n = (n - lb) / pow (2, ub);
        // cout << lb << " " << ub << " " << n ;
        if(n==0) cout << "Sheldon";
        if(n==1) cout << "Leonard";
        if(n==2) cout << "Penny";
        if(n==3) cout << "Rajesh";
        if(n==4) cout << "Howard";
    }

}