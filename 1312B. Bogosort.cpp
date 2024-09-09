#include<bits/stdc++.h>
#include<algorithm>
#include<unordered_map>
#include<unordered_set>
#include<vector>
#include<stack>
typedef long long ll;
using namespace std;
int main(){
    
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		ll arr[n];
		for(int i=0;i<n;i++)
			cin>>arr[i];
		sort(arr,arr+n);
		for(int i=n-1;i>=0;i--)
			cout<<arr[i]<<" ";
		cout<<endl;
	}
}