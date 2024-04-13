#include<bits/stdc++.h>
using namespace std;
void printing(int n){
    for(int i=1; i<=n; i++){
        cout << i << " ";
    }
}

int main(){
    int t; cin >> t;
    // freopen("output.txt", "w", stdout);

    while(t--){
        long long n;
        cin >> n;


        long long sumofn = (n*(n+1))/2;
        long long breakpoint=0;
        for(int i=n; i>0; i--){
            if((n*i)<sumofn){
                breakpoint=i;
                break;
            }
        }

        long long k = breakpoint+n;
        long long s= sumofn*breakpoint + n*(sumofn-((breakpoint)*(breakpoint+1))/2);

        cout << s << " " << k << endl;

        for(int i=1; i<=n; i++){
            cout << 1 << " " << i << " ";
            printing(n);
            cout << "\n";
        }

        for(int j=1; j<=breakpoint; j++){
            cout << 2 << " " << j << " ";
            printing(n);
            cout << "\n";

        }
          
    }
}