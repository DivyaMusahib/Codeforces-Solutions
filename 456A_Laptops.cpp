// two methods 
// 1st => you make a pair of 'a' and 'b' sort in inceasing order of 'a' if 'bi' greator than 'bj' (i<j) print Happy alex
// 2nd => in question its given that all a and b are distinct,
// so suppose 3 laptops are there if price and quality of a laptop is differnt means there exist some 'bi' greator than 'bj' (i<j)

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >>n;
    bool ans = true;

    while(n--){
        int a,b;
        cin >> a >> b;
        if(a!=b) ans = false;
    }

    if(ans) cout << "Poor Alex";
    else cout << "Happy Alex";
}