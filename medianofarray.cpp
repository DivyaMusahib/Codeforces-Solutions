#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        vector<int>arr(n);

        for(int i=0; i<n; i++){
            cin >> arr[i];
        }

        sort(arr.begin(),arr.end());
        long long median=0;

        long long count =0;
        if(n%2==0){
            median = arr[(n/2)-1];
            if(arr[(n/2)]==median){
                count++;
                for(int j=n/2; j<n; j++){
                    if(arr[j]!=median) break;
                    else count++;
                }
            }
            
        }

        else if(n%2!=0){
            median = arr[n/2];
            if(arr[(n/2)+1]==median){
                count++;
                for(int j=(n/2)+1; j<n; j++){
                    if(arr[j]!=median) break;
                    else count++;
                }
            }
        }

        if(count!=0) cout << count << "\n";
        else cout << 1 << "\n";
    }

    return 0;

}