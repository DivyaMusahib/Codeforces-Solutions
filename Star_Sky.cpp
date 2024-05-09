#include<bits/stdc++.h>
using namespace std;

#define f first
#define s second 

int main(){
    int n,q,c;
    cin >> n >> q >> c;
    
    vector<pair<pair<int,int>,int>>a(n);

    for(int i=0; i<n; i++){
        cin >> a[i].f.f >> a[i].f.s >> a[i].s;
    }

    for(int temp=0; temp<q; temp++){
        int t, x1, y1, x2, y2;
        cin >> t >> x1 >> y1 >> x2 >> y2;
        

        int arr[101][101] = {0};

        for(int i=0; i<n; i++){
            
            arr[a[i].f.f][a[i].f.s] = min(a[i].s+t, c);
            cout << arr[a[i].f.f][a[i].f.s] << " ";
        }
        cout << "\n";
        int prefix[101][101];    
        
        for(int row=0; row <= 100; row++){
            for(int col=0; col <= 100; col++){
                if(row==0 && col==0) prefix[0][0] = arr[0][0];
                else if(row==0) prefix[0][col] = prefix[0][col-1] + arr[0][col];
                else if(col==0) prefix[row][0] = prefix[row-1][0] + arr[row][0];
                else prefix[row][col] = prefix[row-1][col] + prefix[row][col-1] - prefix[row-1][col-1] + arr[row][col];
                // prefix[row][col] = prefix[row-1][col] + prefix[row][col-1] - prefix[row-1][col-1] + arr[row][col];
            }
        }


        for(int i=0; i<=100; i++){
            for(int j=0; j<=100;j++){
                cout << prefix[i][j] << " ";
            }
            cout << "\n";
        }

        cout << prefix[x2][y2] - prefix[x2][y1] - prefix[x1][y2] + prefix[x1][y1] << " is the ans\n \n";

    }

}