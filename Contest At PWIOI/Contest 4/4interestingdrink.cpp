#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    vector<int>arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    sort(arr.begin(),arr.end());

    int days;
    cin >> days;

    for(int j=0; j<days; j++){
        int x;
        cin >> x;
        int count=0;
        for(int k=0; k<n; k++){
            if(arr[k]<=x) count++;
            else break;
        }
        cout << count << "\n";
    }

    return 0;
}