#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
    while(t--){
		int n,a,b;
		cin >> n >> a >> b;
		if(n==a && n==b){
			cout << "Yes\n";
		}
        else if((a+b)<=n-2){
			cout << "Yes\n";
		}
        else{
			cout << "No\n";
		}
	}	
}
