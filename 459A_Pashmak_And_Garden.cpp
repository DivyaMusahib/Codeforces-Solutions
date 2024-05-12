#include<bits/stdc++.h>
using namespace std;

int main(){
    int w,x,y,z;
    cin >> w >> x >> y >> z;
    // if(abs(a-c)!=abs(b-d) && ((a-c)!=0) || (b-d)!=0) cout << -1;
    // else if(a==b && b==c && c==d) cout << -1;
    // else{
        if((w-y)==0 && (x-z)!=0)
            cout << w+abs(z-x) << " " << x << " " << w+abs(z-x) << " " << z;
        else if((x-z)==0 && (w-y)!=0)
            cout << w << " " << z+abs(w-y) << " " << y << " " << z +abs(w-y);
        else if(abs(w-y)==abs(x-z) && (w!=y && x!=z))
            cout << y << " " << " "<< x << " " << w << " " << z ;
        else
            cout << -1;        
    // }
}