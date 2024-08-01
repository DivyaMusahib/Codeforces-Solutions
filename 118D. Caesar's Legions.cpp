#include<bits/stdc++.h>
using namespace std;

int n1,n2,k1,k2;
int dp[105][105][15][2];
const int MOD = 1e8;

int f(int n1, int n2, int streak, int gen){
    if(n1==0 &&n2 == 0) return 1;

    if(dp[n1][n2][streak][gen]!=-1) return dp[n1][n2][streak][gen];
    
    long long ans = 0;
    if(n1 > 0 && (gen==1 || streak < k1)) {
        if(gen==1) {
            ans = (ans + f(n1-1,n2,1,0)) % MOD;
        }
        else{
            ans = (ans + f(n1-1,n2,streak+1,0)) % MOD;
        }
    }

    if(n2 > 0 && (gen==0 || streak < k2)) {
        if(gen==0) {
            ans = (ans + f(n1,n2-1,1,1)) % MOD;
        }
        else{
            ans = (ans + f(n1,n2-1,streak+1,1)) % MOD;
        }
    }

    dp[n1][n2][streak][gen] = ans%MOD;
    return ans;
}


int main(){
    cin >> n1 >> n2 >> k1 >> k2;
    memset(dp,-1, sizeof dp);
    cout << f(n1,n2,0,0);
}