#include<bits/stdc++.h>
#define ll long long
#define loop(i,a,b) for(int i=a; i<b; i++)
using namespace std;

int main(){

    #ifndef ONLINE_JUDGE 
    freopen("input.txt", "r", stdin); 
    freopen("output.txt", "w", stdout); 
    #endif 


    int t;
    cin >> t;
    while(t--){
        long long x,y;
        cin >> x >> y;

        cout << min(x,y) << " " << max(x,y) << "\n";
    }
}
