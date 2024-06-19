#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n,t;
    cin >> n >> t;
    vector<bool>arr(n+1,0);
    string s1,s2;
    while(t--){
        cin >> s1 >> s2;
        int num = 0;
        long long temp = 1;
        for(int i=s2.size()-1; i>=0; i--){
            num += ((int)s2[i] - '0')*temp;
            temp *= 10;
        }
        // cout << num << "\n";
        if(s1[0]== '+'){
            if(arr[num]) cout << "Already on\n";
            else{
                bool onkarsaktahai = true;
                for(int i=0; i<arr.size(); i++){
                    if(arr[i]){
                        if(__gcd(num,i)!=1){
                            cout << "Conflict with " << i << "\n";
                            onkarsaktahai = false;
                            break;
                        }
                    }
                }
                if(onkarsaktahai){
                    arr[num] = true;
                    cout << "Success\n";
                }
            }
        }
        else{
            if(arr[num]){
                arr[num] = false;
                cout << "Success\n";
            }
            else{
                cout << "Already off\n";
            }
        }
    }
}