#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,b,d;
    cin >> n >> b >> d;
    vector<int>arr(n);
    int count =0;
    int throwcount =0;

    for(int i=0; i<n; i++){
        cin >> arr[i];
        if (arr[i]<=b) count= count + arr[i];
        if(count > d){
            throwcount++;
            count = 0;
        }
    }

    cout << throwcount;
    
    return 0;
}