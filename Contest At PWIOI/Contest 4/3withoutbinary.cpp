#include<bits/stdc++.h>
using namespace std;
int main(){
    int x,y;
    cin >> x >> y;

    vector<int>a(x);
    vector<int>b(y);

    for(int i=0; i<x; i++){
        cin >> a[i];
    }

    for(int j=0; j<y; j++){
        cin >> b[j];
    }

    vector<int>count(y);


    for(int k=0; k<y; k++){
        count[k]=0;
        for(int l=0; l<x;l++){
            if(a[l]<=b[k]) count[k]++;
        }
    }

    for(int m=0; m<y; m++){
        cout << count[m] << " ";
    }
}