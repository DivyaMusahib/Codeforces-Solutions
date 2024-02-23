#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n,m;
    cin >> n >> m;

    vector<int>arr(n);
    for(int j=0; j<n; j++){
        cin >> arr[j];
    }

    sort(arr.begin(), arr.end());

    int sum=0;
    for(int k=0; k<m; k++){
        if(arr[k]<=0) sum = sum + arr[k];
    }

    cout << -sum << "\n";


}