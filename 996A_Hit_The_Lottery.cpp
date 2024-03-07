#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int num =0;

    for(int i=0; ;){
        if(n/100!=0){
            num = num + n/100;
            n = n - (n/100)*100;
        }
        else if(n/20!=0){
            num = num + n/20;
            n = n - (n/20)*20;
        }
        else if(n/20!=0){
            num = num + n/20;
            n = n - (n/20)*20;
        }
        else if(n/10!=0){
            num = num + n/10;
            n = n - (n/10)*10;
        }
        else if(n/20!=0){
            num = num + n/20;
            n = n - (n/20)*20;
        }
        else if(n/5!=0){
            num = num + n/5;
            n = n - (n/5)*5;
        }
        else{
            num = num + n;
            break;
        }
    }

    cout << num;

    return 0;
}