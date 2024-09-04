    #include<bits/stdc++.h>
    using namespace std;
    typedef long long ll;
    typedef vector<int> vi;
    typedef vector<ll> vll;

    void solve(){
        int n;
        cin >> n;
        vector<vector<char>>arr;
        for(int i=0; i<n; i++) {
            vector<char>temp(4);
            for(int j=0; j<4; j++) {
                cin >> temp[j];
            }
            arr.emplace_back(temp);
        }
        for(int i=arr.size()-1; i>=0; i--) {
            for(int j=0; j<4; j++) {
                if(arr[i][j]=='#') cout << j+1 << " ";
            }
        }
        cout << "\n";
    }

    int main(){
        ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
        int t; cin >> t; while(t--)
            solve();
            
    }