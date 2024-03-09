#include<bits/stdc++.h>
using namespace std;

int main(){

    long long n,m;
    cin >> n >> m;
    long long count =0;
    vector<int>arr(m);

    for(int i=0; i<m; i++){
        cin >> arr[i];
        if(i!=0){
            if(arr[i]>=arr[i-1]) count = count + (arr[i]-arr[i-1]);
            // logic --> if next term is bigger than what currently iam at then simply
            // next - current
            else count = count + (n - arr[i-1] + arr[i]);
            // logic --> if next term is smaller than what currently iam at then suppose there are n houses
            // (n-current position) + 1 (n->1)  + next element(1->next) i didnt add 1 in code bcoz ofindexing
        }
        else if(i==0) count = count + arr[i]-1;
        // we started from index 1 so what about zero index task it is (x-1) minus 1 because she is at house 1

    }
    cout << count;

    return 0;
}