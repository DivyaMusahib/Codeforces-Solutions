#include<bits/stdc++.h>
using namespace std;

typedef long long ll; 
typedef vector<ll> v64; 
typedef vector<int> v32; 
#define loop(i, a, b) for(ll i = a; i < b; i++)
#define all(x) (x).begin(), (x).end() 

void solve(){
    int n,m;
    cin >> n >> m;

    vector<pair<int,int>>v(n+m+1);

    for(int i=0; i<(n+m+1); i++){
        cin >> v[i].first;
    }
    for(int i=0; i<(n+m+1); i++){
        cin >> v[i].second ;
    }

    vector<int>arr;

    for(int i=0; i<(n+m+1); i++){
        int score = 0;
        int ntemp = n, mtemp = m;

        for(int j=0; j<(n+m+1); j++){
            if(j != i){
                if((v[j].first > v[j].second) && ntemp>0){
                    score += v[j].first;
                    ntemp--;
                }
                else if((v[j].first > v[j].second) && ntemp==0){
                    score += v[j].second;
                    mtemp--;
                }

                if((v[j].first < v[j].second) && mtemp>0){
                    score += v[j].second;
                    mtemp--;
                }
                else if((v[j].first < v[j].second) && mtemp==0){
                    score += v[j].first;
                    ntemp--;
                }
            }
        }

        arr.emplace_back(score);
    }

    for(int i=0; i<arr.size(); i++){
        cout << arr [i] << " ";
    }

}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    #ifndef ONLINE_JUDGE 
    freopen("input.txt", "r", stdin); 
    freopen("output.txt", "w", stdout); 
    #endif

    int t;
    cin >> t;

    while(t--){
        solve();
        cout << "\n";
    }
    
}