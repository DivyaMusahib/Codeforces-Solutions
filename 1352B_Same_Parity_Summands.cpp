#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin >> n >> k;
        if(k>n){
            cout << "NO\n";
        }
        else{
            if(n == k){
                cout << "YES\n";
                while(k--){
                    cout << 1 << " ";
                }
                cout << "\n";
            }
            else if(n%2 == 0 && n >= 2*k){
                cout << "YES\n";
                k = k-1;
                while(k--){
                    cout << 2 << " ";
                    n = n-2;
                }

                cout << n << "\n";

            }
            else if(n%2 ==0 && k%2==0){
                cout << "YES\n";
                k = k-1;
                while(k--){
                    cout << 1 << " ";
                    n = n-1;
                }
                cout << n << "\n";
            }
            else if(n%2 ==0 && k%2==1){
                cout << "NO\n";
            }
            else if(n%2==1 && k%2 == 0){
                cout << "NO\n";
            }
            else if(n%2 == 1 && k%2 ==1){
                cout << "YES\n";
                k = k-1;
                while(k--){
                    cout << 1 << " ";
                    n =n-1; 
                }
                cout << n << "\n";    
            }
        }
    }
}