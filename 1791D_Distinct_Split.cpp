#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;

        string s;
        cin >> s;

        int check1[26] = {0};
        int check2[26] = {0};

        int count1 = 0;
        int count2 = 0;

        vector<int>v1(n);
        vector<int>v2(n);

        for(int i=0; i<n; i++){
            if(check1[(int)s[i]- 'a']==0){
                check1[(int)s[i]- 'a'] = 1;
                count1++;
            }
            v1[i] = count1;
        }

        for(int i=n-1; i>=0; i--){
            if(check2[(int)s[i]- 'a']==0){
                check2[(int)s[i]- 'a'] = 1;
                count2++;
            }
            v2[i] = count2;
        }

        int ans = 0;
        for(int i=0; i<n-1; i++){
            // ans = max(ans,v1[i]+v2[i]);
            ans = max(ans,v1[i]+v2[i+1]);
        }

        cout << ans << "\n";
    }
}