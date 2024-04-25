#include<bits/stdc++.h>
using namespace std;

int main(){
    long long r,x,y, newx, newy;
    cin >> r >> x >> y >> newx >> newy;
    double dist = sqrt((newx-x)*(newx-x) + (newy-y)*(newy-y));
    long long  ans = ceil(dist/(float)(2.0 * r));
    cout << ans;

}