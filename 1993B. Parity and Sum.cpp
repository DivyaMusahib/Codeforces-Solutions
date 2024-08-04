#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;


void solve(){
    ll n;
    cin >> n;
    vll arr(n);
    ll numOdd = 0, numEven =0, maxOdd = LLONG_MIN, maxEven = LLONG_MIN, minEven = LLONG_MAX;
    vll even;
    for(int i=0; i<n; i++) {
        cin >> arr[i];
        if(arr[i]&1){
            numOdd++;
            maxOdd = max(maxOdd,arr[i]);
        } else {
            numEven++;
            maxEven= max(maxEven,arr[i]);
            minEven= min(minEven,arr[i]);
            even.push_back(arr[i]);
        }
    }

    if(numOdd == 0 || numEven==0) cout << "0\n";
    else if(maxOdd > maxEven){
        cout << numEven << "\n";
    } else {
        sort(even.begin(),even.end());
        ll num = maxOdd;
        ll ans = 0;
        ll pin =even.size();
        for(int i=0; i<even.size(); i++) {
            if(even[i] < num) {
                ans ++;
                num = num + even[i];
            }
            else {
                pin = i;
                break;
            }
        }
        if(pin!= even.size()) ans = ans + (even.size()-pin) + 1;
        cout << ans << "\n";
    }

}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t; while(t--)
        solve();
        
}