#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    string s;
    cin >> s;

    int antonwins = 0;
    int danikwins = 0;
    for(int i=0; i<n; i++){
        if(s[i]=='A') antonwins++;
        else if(s[i]=='D') danikwins++;
    }

    if(antonwins>danikwins) cout << "Anton";
    else if(antonwins<danikwins) cout << "Danik";
    else if(antonwins==danikwins) cout << "Friendship";


    return 0;

}