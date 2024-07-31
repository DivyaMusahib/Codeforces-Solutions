#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
ll i,j,n,k,a[100005]={0},dp[100055],ans=0,s,m;
ll f(ll x)
{
    if(x>100002) return 0;
    if(dp[x]!=-1) return dp[x];
    j=max(a[x]*x+f(x+2),f(x+1));
    return dp[x]=j;
}
int main()
{
    cin>>n;
    for(i=0;i<=100002;i++) dp[i]=-1;
    for(i=1;i<=n;i++) cin>>k,a[k]++;
    cout<<f(1)<<endl;
    return 0;

}