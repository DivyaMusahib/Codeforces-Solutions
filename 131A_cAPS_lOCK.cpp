// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     // int a = 'a';
//     // int b = 'A';
//     // int c = 'z';
//     // int d = 'Z';

//     // cout << a << "\n";
//     // cout << b << "\n";
//     // cout << c << "\n";
//     // cout << d << "\n";

//     string s;
//     cin >> s;

//     for(int i=0; i<s.length(); i++){
//         if(i ==0 && (int)s[i] >=97)          s[i] = (char)((int)s[i] -32);
//         else if(i!=0 && (int)s[i] <= 90)     s[i] = (char)((int)s[i] +32);
//     }


//     cout << s;

//     return 0;
// }


#include<bits/stdc++.h>
using namespace std;

int main(){

    string s;
    cin >> s;
    string k = s;
    int count =0;
    for(int i=1; i<s.length(); i++){
        if((int)s[i] >=65 && (int)s[i]<=90){
            count++;
            s[i] = (char)((int)s[i] + 32);
        }
    }

    if(count==s.length()-1){
        if((int)s[0]<=90) s[0] = (char)((int)s[0] + 32);
        else if((int)s[0]>=97) s[0] = (char)((int)s[0] - 32);
        cout << s;
    }

    else{
        cout << k;
    }

    return 0;
}