#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    vector<int>arr(n);
    int floor =0, ceiling =0;

    for(int i=0; i<n; i++){
        cin >> arr[i];

        if(arr[i]%2==0) cout << arr[i]/2 << endl;
        else if(arr[i]%2!=0 && floor==0){
            cout << arr[i]/2 << endl;
            floor = 1;
            ceiling =0;
        }
        else if(arr[i]%2!=0 && ceiling==0){
            if(arr[i]<0) cout << (arr[i]/2) - 1 << endl;
            else cout << ceil(arr[i]/2.0) << endl;
            // ceiling =0;
            floor = 0;
        }

    }
}