#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int count1=0,count2=0,count3=0,count4=0,ans=0;
    vector<int>arr(n);

    for(int i =0; i<n; i++){
        cin >> arr[i];
        if(arr[i]==1) count1++;
        else if(arr[i]==2) count2++;
        else if(arr[i]==3) count3++;
        else if(arr[i]==4) count4++;
    }

    ans = ans + count4;
    if(count3<=count1){
        ans += count3;
        count1 = count1 - count3;
    }
    else if(count3>count1){
        ans = ans + count3;
        count1=0; // all count1 will be used
    }
    if(count2%2==0){
        ans = ans + count2/2;
        ans = ans + ceil(count1/4.0);
    }
    else if(count2%2!=0){
        ans = ans + count2/2;
        if(count1>0){
            ans = ans + 1;
            count1 = count1-2;
            if(count1>0){
                ans = ans + ceil(count1/4.0);
            }
        }
        else{
            ans++;
        }
    }

    cout << ans;
    return 0;

}