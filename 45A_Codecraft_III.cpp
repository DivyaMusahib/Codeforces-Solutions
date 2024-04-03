#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;

    int x=0;
    if(s=="January") x=1;
    else if(s=="February") x=2;
    else if(s=="March") x=3;
    else if(s=="April") x=4;
    else if(s=="May") x=5;
    else if(s=="June") x=6;
    else if(s=="July") x=7;
    else if(s=="August") x=8;
    else if(s=="September") x=9;
    else if(s=="October") x=10;
    else if(s=="November") x=11;
    else if(s=="December") x=12;
    
    int y; 
    cin >> y;

    int ans = x +y;
    for(int i=0; ; i++){
        if(ans>12) ans = ans-12;
        else break;
    }

    if(ans==1) cout << "January";
    else if(ans==2) cout << "February";
    else if(ans==3) cout << "March";
    else if(ans==4) cout << "April";
    else if(ans==5) cout << "May";
    else if(ans==6) cout << "June";
    else if(ans==7) cout << "July";
    else if(ans==8) cout << "August";
    else if(ans==9) cout << "September";
    else if(ans==10) cout << "October";
    else if(ans==11) cout << "November";
    else if(ans==12) cout << "December";

}