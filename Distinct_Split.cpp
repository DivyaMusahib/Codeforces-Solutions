#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        long long n;
        cin >>n;
        string s;
        cin >> s;

        sort(s.begin(),s.end());
        vector<long long>arr;
        long long count=1;
        for(int i=1; i<s.size(); i++){
            if(s[i]==s[i-1]) count++;
            else{
                arr.push_back(count);
                count=1;
            }
        }
        arr.push_back(count);

        long long ans=0;
        for(int j=0; j<arr.size(); j++){
            if(arr[j]==1) ans++;
            else ans = ans +2;
        }

        cout << ans << endl;
        
    }
}