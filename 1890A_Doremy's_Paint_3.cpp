#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    
    for(int x=0; x<t; x++){
        int n;
        cin >> n;

        vector<int>arr(n);

        if(n%2==0){
            for(int i=0; i<n; i++){
                cin >> arr[i];
            }

             sort(arr.begin(),arr.end());
             if((arr[0]==arr[(n/2)-1]) && (arr[n/2]==arr[n-1])) cout << "YES\n";
            else cout << "NO\n";
        }

        else if(n%2==1){
            for(int i=0; i<n; i++){
                cin >> arr[i];
            }

            sort(arr.begin(),arr.end());
            // if(((arr[0]==arr[(n-1/2)]) && (arr[n+1/2]==arr[n-1])) || ((arr[0]==arr[(n-3/2)]) && (arr[n-1/2]==arr[n-1]))) cout << "YES";
            // else cout << "NO";
            if((arr[0]==arr[(n-1)/2]) && (arr[(n+1)/2]==arr[n-1])) cout << "YES\n";
            else if((arr[0]==arr[(n-3)/2]) && (arr[(n-1)/2]==arr[n-1])) cout << "YES\n";
            else cout << "NO\n";

        }

    }

    return 0;

}