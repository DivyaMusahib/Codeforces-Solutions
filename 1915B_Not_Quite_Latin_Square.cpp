#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    char ans;

    while(t--){
        for(int i=0; i<3; i++){
            int count_a=0,count_b=0,count_c=0;
            for(int j=0; j<3; j++){
                char c;
                cin >> c;
                if(c=='A') count_a++;
                else if(c=='B') count_b++;
                else if(c=='C') count_c++;
            }
            if(count_a==0) ans='A';
            else if(count_b==0) ans='B';
            else if(count_c==0) ans='C';
        }

        cout << ans << endl;
    }
}