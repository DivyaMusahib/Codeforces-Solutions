#include<bits/stdc++.h>
using namespace std;

int main(){

    // freopen("input.txt", "r", stdin); 
    // freopen("output.txt", "w", stdout); 

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

        int count =1;
        vector<int>stick;
        for(int i=0; i<n-1; i++){
            if(arr[i]==arr[i+1]) count++;
            else{
                stick.emplace_back(count);
                count =1;
            }
        }

        stick.emplace_back(count);

        int count2=0;
        for(int i=0; i<stick.size(); i++){
            if(stick[i]>2){
                if(stick[i]<=5) count2++;
                else{
                    count2 = count2 + stick[i]/3;
                }
            }
        }

        cout << count2 << "\n";

    }
}
