#include<bits/stdc++.h>
using namespace std;
 
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;++i) cin>>a[i];
		int ans=-1;
		for(int k =0;k<=n;++k){
			int liars = 0;
			for(int i = 0; i <n; ++i){
				if(a[i] > k){
					++liars;
				}
			}
			if(liars == k){
				ans=k;
			}
		}
		cout << ans <<"\n";
	}
}