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
        int a,b,c,d;
        cin >> a >> b >> c >> d;

        if(b<a) swap(a,b);
        if(d<c) swap(c,d);

        if(((a<=c && b>=c) && !(a<=d && b>=d)) || ((a<=d && b>=d) && !(a<=c && b>=c)) ){
            cout << "YES\n";
        }
        else cout <<"NO\n";

    }
}
