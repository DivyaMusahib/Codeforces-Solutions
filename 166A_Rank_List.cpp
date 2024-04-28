#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    cin >> n >> k;
    vector<pair<int,int>>a(n);

    for(int i=0; i<n; i++){
        cin >> a[i]. first >> a[i].second;
        a[i].second = - a[i].second;
    }

    sort(a.rbegin(),a.rend());
    // cout << "the sorted list is \n";
    // for(int i=0; i<n; i++){
    //     cout << a[i].first << " " << a[i].second << endl;
    // }

    int count =0;
    for(int i=0; i<n ; i++){
        if(a[i].first==a[k-1].first && a[i].second==a[k-1].second) count++;
    }

    cout << count<<endl;

}