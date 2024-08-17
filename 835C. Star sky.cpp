#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[102][102][11] = {{{0}}};
    int n,q,c, s, x,y;
    cin >> n >> q >> c;
    
    while(n--){
        cin >> x >> y >> s;
        for(int t = 0; t<11 ; t++) {
            arr[x-1][y-1][t] += s;
            s = (s+1)%(c+1);
        }

    }

    int prefix[102][102][11] = {{{0}}};
    for(int i= 1 ; i<101; i++){
        for(int j= 1; j<101 ; j++){
            for(int t = 0; t<11; t++){
                prefix[i][j][t] = arr[i-1][j-1][t] + prefix[i-1][j][t] + prefix[i][j-1][t] - prefix[i-1][j-1][t];
            }
        }
    }

    while(q--){
        int t1, x1, y1, x2, y2;
        cin >>  t1 >> x1 >> y1 >> x2 >> y2;
        t1 %= (c+1);
        cout << prefix[x2][y2][t1] - prefix[x2][y1-1][t1] - prefix[x1-1][y2][t1] + prefix[x1-1][y1-1][t1] << "\n";
    }
    
}