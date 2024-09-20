#include<bits/stdc++.h>
using namespace std;

int main(){
    int n , m;
    cin >> n >> m;
    vector<int>arr(n);
    for(int i=0; i<n; i++) cin >> arr[i];
    sort(arr.begin(),arr.end());
    int p1 = 1 , p2 = 0;
    vector<int>ans;
    while(m>0 && p1<=1000000000){
        if(p2>=n) {
            if(m-p1 >=0){
                m -= p1;
                ans.emplace_back(p1);
            }
            else break;
            p1++;
        }
        else if(p1 != arr[p2]){
            if(m-p1 >=0){
                m -= p1;
                ans.emplace_back(p1);
            }
            else break;
            p1++;
        } else {
            p1++;
            p2++;
        }
    } 

    cout << ans.size() << "\n";
    for(auto it : ans) cout << it << " ";
}