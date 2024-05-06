#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >>n;

    int count25=0;
    int count50 =0;
    bool ans = true;
    while(n--){
        int x;
        cin >> x;
        if(x == 25) count25++;
        else if(x==50){
            if(count25<1){
                ans = false;
                break;
            }
            else count25--;
            count50++;
        }
        else if(x==100){
            if(count50<1 && count25<3){
                ans = false;
                break;
            }
            if(count50>=1 && count25<1){
                ans = false;
                break;
            }
            else{
                if(count50>=1){
                    count50--;
                    count25--;
                }
                else if(count50<1){
                    count25 -= 3;
                }
            }
        }
    }

    if(ans) cout << "YES\n";
    else cout << "NO\n";
}