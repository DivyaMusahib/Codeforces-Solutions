#include<bits/stdc++.h>
using namespace std;

int main(){
    int d, s;
    cin >> d >> s;
    vector<int>arr(d,0);
    int sum = 0;
    vector<pair<int,int>>minmax(d);
    for(int i=0; i<d; i++){
        cin >> minmax[i].first >> minmax[i].second;
        arr[i] = minmax[i].first;
        sum += arr[i];
    }
    if(sum>s) cout << "NO";
    else{
        int temp = s - sum;
        int i =0;
        while(temp>0 && i<d){
            if(temp - (minmax[i].second-minmax[i].first) > 0){
                temp -= (minmax[i].second-minmax[i].first);
                arr[i] = minmax[i].second;
            } else {
                arr[i] += temp;
                temp = 0;
            }
            i++;
        } 
        if(temp==0){
            cout << "YES\n";
            for(auto it : arr) cout << it << " ";
        } else {
            cout << "NO\n";
        }
    }
}