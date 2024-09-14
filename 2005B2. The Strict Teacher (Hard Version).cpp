#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;

void solve(){
    int n,m,q;
    cin >> n >> m >> q;
    vector<int>teach(m);
    for(int i=0; i<m; i++) cin >> teach[i];
    sort(teach.begin(),teach.end());
    vector<int>que(q);
    for(int i=0; i<q; i++){
        cin >> que[i];
        // if(*min_element(teach.begin(),teach.end()) > que[i]) cout << *min_element(teach.begin(),teach.end()) -1 << "\n";
        // else if(*max_element(teach.begin(),teach.end()) < que[i]) cout << n - *max_element(teach.begin(),teach.end()) << "\n";
        if(teach[0] > que[i]) cout << teach[0] -1 << "\n";
        else if(teach[m-1] < que[i]) cout << n - teach[m-1] << "\n";
        else {
            int up = upper_bound(teach.begin(),teach.end(), que[i]) - teach.begin();
            int down = lower_bound(teach.begin(),teach.end(), que[i]) - teach.begin();
            if(que[i] == teach[down]) cout << 0 << "\n";
            else {
                down --;
                cout << (teach[up] - teach[down])/2 << "\n";
            }
        }
    }

}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t; while(t--)
        solve();
        
}