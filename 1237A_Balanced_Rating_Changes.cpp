#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    vector<int>arr(n);
    int neg_floor =0, pos_floor =0;



    for(int i=0; i<n; i++){
        cin >> arr[i];

        if(arr[i]%2==0) cout << arr[i]/2 << endl;
        
        else if(arr[i]<0 && neg_floor==0 && pos_floor==0){
            cout << arr[i]/2 << endl;
            neg_floor++;
        }
        else if(arr[i]<0 && neg_floor==0 && pos_floor==1){
            cout << arr[i]/2 << endl;
            pos_floor=0;
        }
        else if(arr[i]<0 && neg_floor==1 && pos_floor==0){
            cout << arr[i]/2 - 1 << endl;
            neg_floor=0;
        }

        // positives

        else if(arr[i]>0 && neg_floor==0 && pos_floor==0){
            cout << arr[i]/2 << endl;
            pos_floor++;
        }
        else if(arr[i]>0 && neg_floor==1 && pos_floor==0){
            cout << arr[i]/2 << endl;
            neg_floor=0;
        }
        else if(arr[i]>0 && neg_floor==0 && pos_floor==1){
            cout << arr[i]/2 + 1 << endl;
            pos_floor=0;
        }

    }
}