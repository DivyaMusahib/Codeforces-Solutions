#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int>arr(n);
    int no_odd=0, no_even=0, index_odd=0, index_even=0;

    for(int i=0; i<n; i++){
        cin >> arr[i];
        if(arr[i]%2==0){
            no_even++;
            index_even = i;
        }
        else{
            no_odd++;
            index_odd = i;
        }
    }

    if(no_even>no_odd){
        cout << index_odd+1;
    }
    else if(no_odd>no_even){
        cout << index_even+1;
    }

    return 0;
}