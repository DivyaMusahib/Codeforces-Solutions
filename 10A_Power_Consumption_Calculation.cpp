#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,p1,p2,p3,t1,t2,ans=0;
    cin >> n >> p1 >> p2 >> p3 >>t1 >> t2;

    vector<pair<int,int>>interval(n);

    cin >> interval[0].first  >> interval[0].second;
    ans += p1*(interval[0].second-interval[0].first);

    for(int i=1;  i<n; i++){
        cin >> interval[i].first >> interval[i].second;
        int period = interval[i].first - interval[i-1].second;

        if(period<=t1) ans +=period*p1;
        else if(period>t1){
            ans += p1*t1;
            period -= t1;

            if(period<=t2) ans +=period*p2;
            else if(period>t2){
                ans += p2*t2 + p3*(period-t2);                
            }
   
        }
        ans += p1*(interval[i].second-interval[i].first);
    }

    cout << ans;

    return 0;
}