#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    for(int i=0; i<t; i++){
        long long n;
        cin >> n;

        if(n%2!=0 ||  n<4) cout << -1 << "\n";
        // forgot about n=2 in previous code
        else{
            if(n%6==0) cout << n/6;
            else if((n-4)%6==0) cout << (n-4)/6 + 1;
            else if((n-8)%6==0) cout << (n-8)/6 + 2;

            cout << " ";
            
            if(n%4==0) cout << n/4 << "\n";
            else if((n-6)%4==0) cout << (n-6)/4 + 1 << "\n";
        }
    }
    return 0;
}