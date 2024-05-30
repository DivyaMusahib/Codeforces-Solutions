#include<bits/stdc++.h>
using namespace std;

bool check(vector<long long>&ans,int mid, long long x){
    return ans[mid]<=x;
}

int main(){
    long long n = 1000001;
    vector<bool>arr(n,true);
    vector<long long>ans;
    for(int i = 2; i<n; i++){
        if(arr[i]==true){
            ans.emplace_back(1LL*i*i);
            for(long long j = 1LL*i*i; j<n; j= j+i){
                arr[j]= false;
            }
        }
    }

    int k;
    cin >> k;
    while(k--){
        long long x;
        cin >> x;
        int low = 0, high = ans.size()-1;
        int y = -1;
        

        while(low<=high){
            int mid = low + (high-low)/2;
            if(check(ans, mid, x)){
                low = mid+1;
                y = mid;
            }
            else{
                high = mid-1;                
            }
        }
        if(y!=-1 && ans[y]==x) cout << "YES\n";
        else cout << "NO\n";

    }
}