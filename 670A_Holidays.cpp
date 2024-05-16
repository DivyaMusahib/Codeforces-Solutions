#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    int maxHoliday = (n/7)*2;
    int minHoliday = (n/7)*2;

    if(n%7 >=2){
        maxHoliday += 2;
    }
    else if(n%7 ==1)maxHoliday += 1;

    if(n%7 == 6 ) minHoliday += 1;
    if(n%7 == 7 ) minHoliday += 1;

    cout << minHoliday << " " << maxHoliday;

}