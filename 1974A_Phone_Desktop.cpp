#include<bits/stdc++.h>
using namespace std;

typedef long long ll; 
typedef vector<ll> v64; 
typedef vector<int> v32; 
#define loop(i, a, b) for(ll i = a; i < b; i++)
#define all(x) (x).begin(), (x).end() 

void solve(){
    int a,b;
    cin >> a >> b;
    bool flag = true;
    if(b%2 != 0) flag = false;

    int b_screen =  (ceil)(b/2.0);
    int a_screen = (ceil)(a/7.0);

    // cout << b_screen << "-b screen " << a_screen << "-a screen ";

    if(b_screen>=a_screen) cout << b_screen;
    else{
        if(flag == false){
            if((a- ((b_screen-1)*7)) > 11){
                int count = b_screen;
                count += (ceil)((a- ((b_screen-1)*7)-11)/15.0);
                cout << count;
            }
            else{
                cout << b_screen;
            }
        }
        else cout << b_screen + (ceil)((a- (b_screen*7))/15.0);
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