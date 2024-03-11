 #include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;

	vector<int>arr(12);
	for(int i=0;i<12;i++){
		cin >> arr[i];
	}
	sort(arr.begin(),arr.end());
	int sum=0;

	int j=11;
	while(sum<n && j>=0){
		sum+=arr[j];
		j--;
	}
	if(sum<n){
		cout << "-1";
	}
	else{
		int y=11-j;
		cout << y;
	}
}