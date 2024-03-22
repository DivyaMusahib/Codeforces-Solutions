#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,a,b;
    cin >> n >> a >> b;

    int ans = n - max(a+1,n-b) + 1;
    cout << ans;

    return 0;
}

// logic:-
// in question we are told that
// x>=a and y<=b where x are the number of people in front of him and y be number of people at back of him
// and for position we can say it can be x+1 or n-y....both are same
// lets take the base values of x and y means x(min)= a and y(max)=b
// so pos(min) = x(min) + 1;  or pos(min)= n - y(max);
// so we will get two minimum conditions for the position they both should satisfy so we will take the larger of tow
// means minimum itni honi chahiye is se badi chalegi
// so we will get the answer as total are n position minimum position is pos and maximum position can be n
// so ans = n - max(a+1,n-b) + 1