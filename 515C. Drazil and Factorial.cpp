#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    string ans = "";
    while(n--){
        char ch ; cin >> ch;
        if(ch=='2') ans += '2';
        else if(ch=='3') ans += '3';
        else if(ch=='4') ans += "322";
        else if(ch=='5') ans += '5';
        else if(ch=='6') ans+= "53";
        else if(ch=='7') ans+= '7';
        else if(ch=='8') ans+= "7222";
        else if(ch=='9') ans+= "7233";
    }
    sort(ans.rbegin(),ans.rend());
    cout << ans;
}