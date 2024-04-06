#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n, count1=0, count2=0, count3=0;
    cin >> n;

    for(int i=0; i<n; i++){
        int temp;
        cin >> temp;
        
        if(temp == 1) count1++;
        else if(temp == 2) count2++;
        else if(temp == 3) count3++;
    }

    int maxi = count1;
    if(count2>maxi && count2>count3) maxi = count2;
    else if(count3>maxi && count3>=count2) maxi = count3;

    cout << n - maxi;
}