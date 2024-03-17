#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];


    if(n!=1){
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    vector<int>ans;
    int count =1;
    for(int j=1; j<n; j++){
        if(arr[j]>=arr[j-1]) count++;
        else{
            ans.push_back(count);
            count = 1;
        }
        if(j==n-1) ans.push_back(count);
    }


    // if(ans.size()!=1){
    sort(ans.begin(),ans.end());
    cout << ans[ans.size()-1] ;
    // }
    // else cout << ans[0];
    }

    else if(n==1) cout << 1 ;
}