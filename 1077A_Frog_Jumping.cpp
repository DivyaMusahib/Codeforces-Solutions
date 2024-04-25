#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
	
	while(t--){
        long long a,b,k;
        cin >>a >> b >> k;
        cout << a*((k+1)/2) - b*(k/2) << "\n";
	}
	return 0;
}
