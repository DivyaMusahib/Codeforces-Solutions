#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >>n;

    int count_mishi = 0, count_chris = 0; 

    for(int i=0; i<n; i++){
        int m,c;

        cin >> m >> c;

        if(m>c) count_mishi++;
        else if(c>m) count_chris++;
    }

    if(count_mishi > count_chris) cout << "Mishka";
    else if (count_mishi < count_chris) cout << "Chris";
    else if(count_mishi==count_chris) cout << "Friendship is magic!^^";

    return 0; 
}