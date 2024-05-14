#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t;
    cin >> t;

    while(t--){
        ll n,k;
        cin >> n >> k;
        ll sum =0;
        vector<ll>arr(n);
        for(int i=0; i<n; i++){
            cin >> arr[i];
            sum += arr[i];
        }

        if(sum<=k) cout << n << "\n";
        else{
            vector<ll>front(n),back(n);
            ll count =0;

            front[0] = arr[0];
            back[n-1]= arr[n-1];

            for(int i=1; i<n; i++) front[i] = front[i-1] + arr[i];
            for(int j=n-2; j>=0; j--) back[j] = back[j+1] + arr[j];
            reverse(back.begin(),back.end());


            ll j,i;
            i = lower_bound(front.begin(),front.end(),(k+1)/2) - front.begin();
            j = lower_bound(back.begin(),back.end(),k/2) - back.begin();
        

            if(front[i]> ((k+1)/2)){
                count += i;
            }
            else if(front[i] == (k+1)/2) count += i+1;

            if(back[j] > k/2){
                count += j;
            }
            else if(back[j] == k/2) count += j+1;

            cout << count << "\n";
        }
    }
}