#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>> t;
    while(t--){
        int n; cin >> n;
        int ans=0;

        for(int y=0; y<=(n/2021); y++){
            if(n>=2020 && (n-y)%2020==0 && ((n-y)/2020)>=y){
                ans++;
                break;
            }
        }

        if(ans) cout<<"YES\n";
        else if(ans==0)cout << "NO\n";
    }
}