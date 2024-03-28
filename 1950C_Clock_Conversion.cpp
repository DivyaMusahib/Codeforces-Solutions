#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    for(int i=0; i<t; i++){
        string s;
        cin >> s;

        int a = (int)s[0]-48;
        int b = (int)s[1]-48;

        if((10*a+ b)>0 && (10*a+ b)<12) cout << s << " " << "AM\n";
        else if((10*a+ b)>12 && (10*a+ b)<22) cout << 0 << (10*a+ b)-12 << s[2] << s[3] << s[4] << " " << "PM\n";
        else if((10*a+ b)>=22 && (10*a+ b)<24) cout << (10*a+ b)-12 << s[2] << s[3] << s[4] << " " << "PM\n";
        else if((10*a+ b)==12) cout << 12 << s[2] << s[3] << s[4] << " " << "PM\n";
        else if((10*a+ b)==0) cout << 12 << s[2] << s[3] << s[4] << " " << "AM\n";

    }

    return 0;
}