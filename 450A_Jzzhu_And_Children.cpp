#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,m; 
	cin >> n >> m;
	
	vector<pair<int,int>>arr(n);
	
	for(int i=0; i<n; i++){
		cin >> arr[i].first;
		arr[i].second = i+1;
	}

	while (arr.size()>1) {
		if (arr[0].first <= m) arr.erase(arr.begin());
		else {
			arr[0].first -= m;
			arr.push_back(arr[0]);
			arr.erase(arr.begin());
		}
	}
	cout << arr[0].second;
}