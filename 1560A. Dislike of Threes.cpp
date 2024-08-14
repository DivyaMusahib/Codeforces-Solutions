#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    vector<int>arr;
    arr.push_back(0);
    int x = 1;
    for(int i=1; i<1005; ){
        if(x%3==0 || x%10 == 3){
            x++;
            continue;
        } else {
            arr.push_back(x);
            x++;
            i++;
        }
    }
    
    int t;
    cin >> t;
    while(t--) {
        int temp; cin >> temp ; cout << arr[temp] << "\n";
    }
}