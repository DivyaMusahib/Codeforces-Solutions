#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

vector<ll>price(100005);
bool visited[100005]={false};
vector<ll> adj[100005];

ll dfs(ll node) {
    visited[node] = true;
    ll priceOfOneComponent = price[node];
    for (auto neigh : adj[node]) {
        if (!visited[neigh]) {
            priceOfOneComponent = min(priceOfOneComponent, dfs(neigh));
        }
    }
    return priceOfOneComponent;
}

int main(){
    ll n,k,x,y;
    cin >> n >> k;
    for(ll i=1; i<=n; i++) cin >> price[i];

    while(k--){
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }

    ll ans = 0;
    for(ll i=1; i<=n; i++) {
        if(!visited[i]) {
            ans += dfs(i);
        }
    }
    cout << ans;

}