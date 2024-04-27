#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        vector<int>a(n);
        vector<int>b(n);

        int a_maxi = INT_MIN;
        int b_maxi = INT_MIN;

        for(int i=0; i<n; i++){
            cin >> a[i];
            if(a[i]>a_maxi) a_maxi = a[i]; 
        }


        for(int i=0; i<n; i++){
            cin >> b[i];
            if(b[i]>b_maxi) b_maxi = b[i]; 
        }


        bool ans = false;

        if(a_maxi == a[n-1] && b_maxi==b[n-1]) ans = true;
        
        else if(a_maxi==a[n-1] && a_maxi>=b_maxi){
            for(int i=0; i<n-1; i++){
                if(b[i]>b[n-1] && a[i]>b[n-1]){
                    ans = false;
                    break;
                }
                else if(b[i]>b[n-1] && a[i]<=b[n-1]) ans = true;
                else if(b[i]<b[n-1]) ans = true;
            }
        }

        else if(b_maxi==b[n-1] && b_maxi>=a_maxi){
            for(int i=0; i<n-1; i++){
                if(a[i]>a[n-1] && b[i]>a[n-1]){
                    ans = false;
                    break;
                }
                else if(a[i]>a[n-1] && b[i]<=a[n-1]) ans = true;
                else if(a[i]<a[n-1]) ans = true;
            }
        }

        if(ans) cout << "YES\n";
        else cout << "NO\n";

    }

}