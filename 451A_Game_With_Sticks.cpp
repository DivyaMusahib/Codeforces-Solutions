#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin >> n >> m;

    int corners = n*m;
    for(int i=1; i>0; i++){
        if(corners == 0 && i%2==0) {
            cout << "Akshat";
            break;
        }
        else if(corners == 0 && i%2!=0) {
            cout << "Malvika";
            break;
        }
        corners = corners - n - m + 1;
        n = n - 1;
        m = m - 1;
    }

    return 0;
}