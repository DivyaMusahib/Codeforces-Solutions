#include<bits/stdc++.h>
using namespace std;

int main(){
    int scoreteam1=0, scoreteam2=0;
    int n;
    cin >> n;

    string t1;
    cin >> t1;

    string t2;

    scoreteam1++;

    for(int i=0; i<n-1; i++){
        string k;
        cin >> k;

        if(k==t1) scoreteam1++;
        else{
            scoreteam2++;
            t2 = k;
        }
    }

    if(scoreteam1>scoreteam2) cout << t1;
    else if(scoreteam1<scoreteam2) cout << t2;

    return 0;

}