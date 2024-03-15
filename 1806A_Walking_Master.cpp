#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    for(int i=0; i<t; i++){
        int x,y,p,q;
        cin >> x >> y >> p >> q;
        if(q>=y){
        int steps=0;

        steps = q-y;
        x = x + steps;
        if(p<=x){
        steps = steps + abs(p - x);

        cout << steps << "\n";
        }
        else{cout << -1 <<"\n";}
        }

        else{
            cout << -1 <<"\n";
        }


    }

}