#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int a;
        cin >>a;

        if(360 % (180-a) == 0) cout << "YES\n";
        else cout << "NO\n";
    }

    // angle of regular polygon (a)= ((n-2)*180)/n
    // making n in terms of a

    return 0;
}