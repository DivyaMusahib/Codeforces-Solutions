#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[5];
    for(int i=1; i<=4;i++){
        cin >> arr[i];
    }

    string s;
    cin >>s;
    int sum=0;

    for(int j = 0;j < s.size();j++){
       sum += arr[s[j]-'0'];
    }
    cout << sum;
}