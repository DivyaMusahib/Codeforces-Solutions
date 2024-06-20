#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        cout << (n+1)/2 << "\n";
        int temp = (n+1)/2;
        int i = 1, j = 3*n;
        while(temp--){
            cout << i << " " << j << "\n";
            i += 3;
            j -= 3;
        }
    }
}