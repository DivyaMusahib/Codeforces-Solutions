#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        long long a,b,c;
        cin >> a >> b >> c;

        int temp1 =b/(c+1);
        int temp2=b%(c+1);

        for(int i=0;i<temp2;i++){
            cout<<string(temp1+1,'R')<<'B';
        }
        
        for(int i=temp2;i<c;i++){
            cout<<string(temp1,'R')<<'B';
        }
        cout<<string(temp1,'R');
        cout<<endl;
    }
}