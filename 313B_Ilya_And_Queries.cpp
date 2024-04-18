#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;

	vector<int>prefixCount;
	prefixCount.push_back(0);
	long long count=0;
	for(int i=1; i<s.length();i++){
		if(s[i]==s[i-1]) count++;
		prefixCount.push_back(count);
	}

    int t;
    cin >>t;

    while(t--){
        int l,r;
        cin >>l >>r;
        // int count =0;

        // for(int i=l-1; i<r-1; i++){
        //     if(s[i]==s[i+1]) count++;
        // }

		cout << prefixCount[r-1] - prefixCount[l-1]<<"\n";

        // cout << count << endl;
    }
}