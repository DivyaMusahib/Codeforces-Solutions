#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        long long n;
        cin >> n;
        string s;
        cin >> s;
        long long count =0;
        for(int i=0; i<n; i++){
            if(s[i]=='L') count += i;
            else if(s[i]=='R') count += n-i-1;
        }

        // cout << "the count is "<< count << "\n"; 

        vector<long long>change;
        for(int i=0; i<n/2; i++){
            if(s[i]=='L')
            change.emplace_back(n-i-1-i);
        }
        for(int i=n/2; i<n; i++){
            if(s[i]=='R')
            change.emplace_back(i-(n-i-1));
        }

        sort(change.rbegin(),change.rend());
        for(int i=0; i<change.size(); i++){
            count = count + change[i];
            cout << count << " ";
        }
        for(int i= change.size(); i<n; i++){
            cout << count << " ";
        }        
        cout << "\n";
    }
}