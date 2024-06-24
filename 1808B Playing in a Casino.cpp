#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    long long t;
    cin >> t;

    while(t--){
        long long n,m;
        cin >> n >> m;

        vector<vector<long long>>arr(m);

        for(long long i=0; i<n; i++){
            for(long long j=0; j<m; j++){
                long long x;
                cin >> x;
                arr[j].emplace_back(x);
            }
        }

        for(long long i =0; i<m; i++){
            sort(arr[i].rbegin(),arr[i].rend());
        }


        // for(long long i=0; i<m; i++){
        //     cout << "\n----------------"<< "\n";
        //     for(long long j=0; j<n; j++){
        //         cout << arr[i][j] << " ";
        //     }
        // }


        long long ans = 0;
        for(long long i=0; i<m; i++){
            long long temp1 = 0;
            long long temp2 = n-1;
            for(long long j=0; j<n; j++){
                ans = ans + arr[i][j]*temp2 - arr[i][j]*temp1;
                temp1++;
                temp2--;
            }
        }

        cout << ans << "\n";
    }
}