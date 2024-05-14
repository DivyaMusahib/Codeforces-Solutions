#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

void sieve(ll k){
    ll n = 10000001;
    vector<bool>arr(n,1);
    arr[0]=0, arr[1]=0;

    for(ll i=2; i<n; i++){
        if(arr[i]==1 && k>0){
            cout << i << " ";
            for(ll j = 1LL*i*i; j<n; j=j+i){
                arr[j]=0;
            }
            k--;
        }
        else continue;
    }

}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    ll n;
    cin >> n;

    sieve(n);
}