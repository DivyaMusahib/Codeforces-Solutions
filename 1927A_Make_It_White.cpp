#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    for(int i=0; i<t; i++){
        int n;
        cin >> n;

        vector<char>arr(n);
        vector<int>store;
        for(int j=0; j<n; j++){
            cin >> arr[j];
            if(arr[j]=='B') store.push_back(j+1);
        }

        // cout << store.size() << "size"<< "\n";
        
        cout << "ans is " << store[store.size()-1] - store[0] + 1 << "\n";

    }
    return 0;
}