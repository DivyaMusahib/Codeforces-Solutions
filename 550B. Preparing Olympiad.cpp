#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n,l,r,x;
    cin >> n >> l >> r >> x;

    long long maxtemp = pow(2,n);
    long long arr[n];
    for(int i=0; i<n; i++) cin >> arr[i];

    long long count = 0;
    for(int i=0; i<maxtemp; i++){
        long long numOfBitOn = 0;
        long long maxDifficulty = INT_MIN;
        long long minDifficulty = INT_MAX;
        long long sum = 0;
        for(int j=0; j<n; j++){
            if(i & (1<<j)){
                numOfBitOn++;
                maxDifficulty =max(maxDifficulty, arr[j]);
                minDifficulty =min(minDifficulty, arr[j]);
                sum += arr[j];
            }
        }

        if(sum >=l && sum <=r && numOfBitOn>=2 && (maxDifficulty-minDifficulty)>=x){
            count++;
        }
    }
    cout << count << "\n";
}