#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    int count = 0;
    for(int i=0; i<t; i++){
        string s;
        cin >> s;
        // if(s[0]=='T' && s[1]=='e' && s[2]=='t' && s[3]=='r' && s[4] ahedron)
        if(s=="Tetrahedron") count = count + 4;
        else if(s=="Cube") count = count + 6;
        else if(s=="Octahedron") count = count + 8;
        else if(s=="Dodecahedron") count = count + 12;
        else if(s=="Icosahedron") count = count + 20;

    }

    cout << count ;
    return 0;
}