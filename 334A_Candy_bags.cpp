#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    int square = n *n;

    for(int i=1; i<=square/2; i++){
        cout << i << " " << square - i + 1 << " ";
        if(i%(n/2)==0) cout << "\n";
    }
}