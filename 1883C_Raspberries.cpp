#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n,k,count=0;
        cin >> n >> k;

        vector<long long>arr(n);
        vector<long long>rem(n);
        

        if(k==4){
            long long count0=0, count1=0, count2=0, count3=0;
            for(int i=0; i<n; i++){
                cin >> arr[i];
                if(arr[i]%k==0) count0++;
                else if(arr[i]%k==1) count1++;
                else if(arr[i]%k==2) count2++;
                else if(arr[i]%k==3) count3++;
            }

            if(count0>=1 || count2>=2) cout << "0\n";
            else if(count3>0 || (count1>0 && count2>0)) cout << "1\n";
            else cout << "2\n";
        }
        else{
            for(int i=0; i<n; i++){
                cin >> arr[i];
                rem[i] = arr[i]%k;
            }

            sort(rem.begin(),rem.end());
            if(rem[0]==0){
                cout << 0 << "\n";
            }
            else{
                cout << k - rem[n-1] << "\n";
            }
        }
    }
    return 0;
}