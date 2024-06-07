#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

bool check(ll mid , ll p[], ll num[], ll cnt[], ll r){
    // ll cost = (1LL*mid*cnt[0] - num[0])*p[0] + 1LL*(mid*cnt[1] - num[1])*p[1] + 1LL*(mid*cnt[2] - num[2])*p[2]) <= r; 
    ll cost = 0;
    if(((1LL*mid*cnt[0] - num[0])*p[0])>=0){
        cost += (1LL*mid*cnt[0] - num[0])*p[0];
    }
    if(((1LL*mid*cnt[1] - num[1])*p[1])>=0){
        cost += (1LL*mid*cnt[1] - num[1])*p[1];
    }
    if(((1LL*mid*cnt[2] - num[2])*p[2])>=0){
        cost += (1LL*mid*cnt[2] - num[2])*p[2];
    }

    return cost <= r;
}


int main(){
    string s;
    cin >> s;

    ll cnt[3]={0};

    for(int i=0;i<s.size(); i++){
        if(s[i]=='B') cnt[0]++;
        if(s[i]=='S') cnt[1]++;
        if(s[i]=='C') cnt[2]++;
    }


    ll num[3];
    cin >> num[0] >> num[1] >> num[2];
    
    ll p[3];
    cin >> p[0] >> p[1] >> p[2];

    ll r;
    cin >> r;

    ll low = 0, high = 1e14;
    ll ans = 0;
    while(low<=high){
        ll mid = low + (high-low)/2;
        if((check(mid,p,num,cnt , r))){
            ans = mid;
            low = mid + 1;
        }
        else{
            high = mid -1;
        }
    }

    cout << ans ;
}