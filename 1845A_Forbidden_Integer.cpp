#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n,x,k;
        cin >> n>> k >> x;
        if(k>=1 && x!=1){
            cout << "YES\n";
            cout << n << "\n";

            for(int i=0; i<n; i++){
                cout << 1 << " ";
            }

            cout << "\n";            
        }
        else if(k==1 && x==1){
            cout << "NO\n";
        }
        else if(k>1 && x==1){
            if(n%2 ==0 && k>=2){
                cout << "YES\n";
                cout << n/2 << "\n";
                for(int i=0; i<n/2; i++){
                    cout << 2 << " ";
                }

            }
            else if(n%2 ==1 && n>=3 && k>=3){
                cout << "YES\n";
                cout << 1+(n-3)/2 << "\n";
                cout << 3 << " ";
                for(int i=0; i<(n-3)/2; i++){
                    cout << 2 << " ";
                }

            }
            else{
                cout << "NO\n";
            }
        }

    }
}