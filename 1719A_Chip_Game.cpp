#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	for(int i=0;i<n;i++){
		long long a,b;
		cin >> a >> b;
		if((a%2==0 && b%2==0) || (a%2!=0 && b%2!=0)) cout << "Tonya" << "\n";
		else cout << "Burenka" << "\n";
		//if its a square matrix so the first person can win
	}
}