#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    
    while(t--){
    string x,y;
    cin >> x >> y;
    bool maxi_first = false;

    vector<int>arr_x;
    vector<int>arr_y;
    
    for(int i=0; i<x.length(); i++){
        if((int)x[i] == (int)y[i]){
            arr_x.push_back((int)x[i]-48);
            arr_y.push_back((int)y[i]-48);
        }
        else if(maxi_first != true){
            int temp1 = max((int)x[i]-48, (int)y[i]-48);
            int temp2 = min((int)x[i]-48, (int)y[i]-48);
            arr_x.push_back(temp1);
            arr_y.push_back(temp2);
            maxi_first= true;

        }
        else if(maxi_first == true){
            int temp1 = max((int)x[i]-48, (int)y[i]-48);
            int temp2 = min((int)x[i]-48, (int)y[i]-48);
            arr_x.push_back(temp2);
            arr_y.push_back(temp1);
        }

    }

    for(int j=0; j<arr_x.size(); j++){
        cout << arr_x[j];
    }
    cout << "\n";

    for(int j=0; j<arr_y.size(); j++){
        cout << arr_y[j];
    }

    cout << "\n";
    }


    return 0;
}