// Method -1 
#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n,k;
    cin >> n >> k;

    string s;
    cin >> s;

    vector<char>charset(k);
    for(long long i=0;i<k; i++) cin >> charset[i];
    
    vector<long long>seq;
    bool found;
    for(long long i = 0; i < s.size(); i++){
        found = false;
        for(long long j = 0; j < k; j++){
            if(s[i] == charset[j]){
                found = true;
                break;
            }
        }
        if(!found)
            seq.emplace_back(i);
    }
    seq.emplace_back(n);

    long long ans = 0;
    ans += (seq[0] *(seq[0]+1))/2;

    for(long long i=1; i<seq.size(); i++){
        long long temp = ((seq[i]-seq[i-1])*(seq[i]-seq[i-1]-1))/2;
        ans += temp;
    }

    cout << ans ;

}

// Method -2 hashing
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    string s;
    cin >> s;
    unordered_map<char, int> mp;

    for (int i = 0; i < m; i++) {
        char x; 
        cin >> x;
        mp[x]++;
    }

    long long ans = 0;
    int start = -1, end = -1;

    for (int i = 0; i < n; i++) {
        if (mp.find(s[i]) != mp.end()) {
            if (start == -1) start = i + 1;
            end = i + 1;
        } else {
            if (start != -1) {
                long long length = end - start + 1;
                ans += (length * (length + 1)) / 2;
            }
            start = -1;
            end = -1;
        }
    }

    if (start != -1) {
        long long length = end - start + 1;
        ans += (length * (length + 1)) / 2;
    }

    cout << ans << "\n";
}
