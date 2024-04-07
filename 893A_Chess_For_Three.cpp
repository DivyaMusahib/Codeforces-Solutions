#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    vector<int>arr(n);

    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    int play = 1+2;
    int other = 3;
    int total = 6;
    int ans =0;
    for(int i=0; i<n; i++){
        if(arr[i]==total-play){
            cout << "NO";
            break;
        }
        else{
            ans++;
            play = total - play + arr[i];
            other = total - play;
        }
    }

    if(ans==n) cout << "YES";

    
}