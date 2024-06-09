#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t;
    cin >> t;

    while(t--){
        long long n,k,b,s;
        cin >> n >> k >> b >> s;
        if(s/k < b) cout << -1 << "\n";
        else{
            if(s/k == b){
                n--;
                while(n--){
                    cout << 0 << " ";
                }
                cout << s << "\n";
            }
            else if(s/k > b){
                if((n-1)>0 && (s - (b+1)*(k) -1)/(n-1) < k) {
                    cout << (b+1)*(k) -1 << " ";
                    n--;
                    s = s - ((b+1)*(k) -1);
                    // cout << s << "tjis is s\n";
                    while((s-(k-1))>=0){
                        cout << k-1 << " ";
                        s = s- (k-1);
                        n--;
                    }
                    cout << s << " ";
                    n--;
                    for(int i=0; i<n; i++){
                        cout << 0 << " ";
                    }
                    cout << "\n";
                }
                else{
                    cout << -1 << "\n";
                }
            }

        }

    }
}