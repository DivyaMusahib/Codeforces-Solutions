#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;

        vector<char>arr1(n);
        vector<char>arr2(n);

        for(int i=0; i<n; i++){
            cin >> arr1[i];
        }
        for(int j=0; j<n; j++){
            cin >> arr2[j];
        }

        int count =0;
        for(int k=0; k<n; k++){
            if(arr1[k]==arr2[k]) count++;
            else if((arr1[k]=='G' || arr1[k]=='B') && (arr2[k]=='G' || arr2[k]=='B')) count++;
        }

        if(count==n) cout << "YES\n";
        else cout << "NO\n";
    }
}