#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    int t;
    cin >> t;

    while(t--){
        int n,k,q;
        cin >> n >> k >> q;
        long long count =0;
        long long ans = 0;
        for(int i=0; i<n; i++){
            long long x;
            cin >> x;
            if(x<=q) count++;
            else{
                if(count>=k){
                    // suppose 5 days and atleast 3 days then
                    // case 1 he go for exactly 3 days xxx00, 0xxx0, 00xxx -> 5 - 3 + 1
                    // case 2 he go for exactly 4 days xxxx0, 0xxxx -> 5 - 4 + 1
                    // case 3 he go for exactly 5 days xxxxx -> 5 - 5 + 1
                    ans += (count+1)*(count-k+1)*1LL - ( ((count)*(count+1)*1LL)/2 - ((k-1)*(k)*1LL)/2 ) ; 
                }
                count = 0;
            }
        // cout << count << " " << ans << "\n";
        }
        if(count>=k) ans += (count+1)*(count-k+1)*1LL - ( ((count)*(count+1)*1LL)/2 - ((k-1)*(k)*1LL)/2 ) ; 
        cout << ans << "\n";        
    }
}