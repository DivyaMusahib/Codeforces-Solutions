#include <bits/stdc++.h>
using namespace std;

void seive(vector<int>&divisor, int n){
    vector<int>arr(n+1,0);
    for(int i=1; i<n+1; i++){
        for(int j=i; j<n+1; j=j+i){
            if(j==n){
                divisor.emplace_back(i);
            }
        }
    }
}

bool check(int diviso, string s){
    int diff = 0;
    
    for(int i=0; i<s.size(); i++){
        if( s[i] == s[i%diviso]){
            continue;
        }
        else{
            diff++;
            if(diff>1){
                break;
            }
        }
    }

    int diff2 =0;
    // hshahaha
    // 01234567
    for(int i=0; i<s.size(); i++){
        if( s[i] == s[s.size() - diviso + i%diviso]){
            continue;
        }
        else{
            diff2++;
            if(diff2>1){
                break;
            }
        }
    }

    if(diff == 0 || diff==1) return true;
    if(diff2 == 0 || diff2==1) return true;
    else return false;
}

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    vector<int>divisor;
    seive(divisor,n);
    for(int i=0; i<divisor.size(); i++){
        if(check(divisor[i],s)){
            cout << divisor[i];
            break;
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    #ifndef ONLINE_JUDGE 
    freopen("input.txt", "r", stdin); 
    freopen("output.txt", "w", stdout); 
    #endif 

    int t;
    cin >> t;
    while (t--) {
        solve();
        cout << "\n";
    }
}
