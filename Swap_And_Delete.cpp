#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        string s;
        cin >> s;
        long long count0=0, count1=0;
        long long sum=0;
        vector<int>prefixSum;

        for(int i=0; i<s.length();i++){
            if(s[i]=='0'){
                count0++;
                prefixSum.push_back(sum);
            }
            else{
                count1++;
                sum++;
                prefixSum.push_back(sum);
            }
        }

        int ans =0;
        if(count0==count1) ans =0;
        else if((count0==0)) ans =count1;
        else if((count1==0)) ans =count0;
        else{
        ans = s.length() - (lower_bound(prefixSum.begin(),prefixSum.end(),min(count0,count1))-prefixSum.begin() + 1);
        }
        cout << ans << "\n";
    }
}