#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

vector<ll> adj[100005];
bool visited[100005] = {0};
ll ans = 0;

void dfs(int node , int parent){
    visited[node] = 1;
    for(int child : adj[node]) {
        if(child != parent) {
            dfs(child,node);
        }
    }
}

int main(){
    int n,x; cin >> n;
    for(int i=1; i<=n; i++){
        cin >> x;
        adj[x].emplace_back(i);
        adj[i].emplace_back(x);
    }

    for(int i=1; i<=n; i++) {
        if(!visited[i]){
            ans++;
            dfs(i,-1);
        }
    }
    cout << ans << "\n";
}