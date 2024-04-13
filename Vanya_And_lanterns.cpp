//important learning use of fixed=> doesnot print in scientific notation
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    long long l;
    cin >> l;

    vector<long long>arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end());

    vector<long long>arrDiff;
    int count = 0;
    for(int i=0; i<n-1; i++){
        arrDiff.push_back(arr[i+1]-arr[i]);
        count++;
    }
    if(count==0){arrDiff.push_back(arr[0]);} //because if arr has 1 element then arrDiff loop will not work

    sort(arrDiff.begin(), arrDiff.end());

    double ans = ((double)(arrDiff[arrDiff.size()-1]))/2.0;

    long long temp1 = arr[0];
    long long temp2 = l-arr[n-1];

    if(temp1>ans && temp1>temp2) ans = temp1;
    else if(temp2>ans && temp2>temp1) ans = temp2;

    // cout << ans;
    // cout << fixed << setprecision(10) << ans;
    cout << fixed << ans;

}