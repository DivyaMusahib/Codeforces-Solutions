#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--) {
        int n,k;
        cin >> n >> k;
        vector<int>arr(n);
        for(int i=0; i<n; i++) cin >> arr[i];
        int j = 0, temp = 0;
        for(int x = 0; x<n; x++) {
            temp += arr[x];
            if(temp==k+1){
                j = x-1;
                temp --;
                break;
            } else j = x;
        }
        
        int ans = n - j - 1;
        // cout << ans << " "<< j<< "   ->";
        if(temp !=k ) ans = -1;
        else {
            for(int i=1; i<n; i++) {
                temp -= arr[i-1];
                while(temp!=k+1 && j<n-1) {
                    j++;
                    temp += arr[j];
                }
                // cout << "hii" << temp<<"temp";
                if(temp == k+1){
                    temp--;
                    j--;
                    // cout << "abc";
                    ans = min(ans , (n - (j-i+1)));
                } else if(temp==k){
                    ans = min(ans , (n - (j-i+1)));
                    // cout << "de";
                } else {
                    // cout << "gh";
                    break;
                }
            }
        }
        cout << ans << "\n";
    }
}