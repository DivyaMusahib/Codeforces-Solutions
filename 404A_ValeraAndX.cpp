#include<bits/stdc++.h>
using namespace std;


int main() {
    
    int n;
	cin >> n;
    
    char arr[301][301];
	for(int i = 0; i < n; i++){
        for(int j=0;j<n; j++){
            cin >> arr[i][j];
        }
    }

	bool ans = (arr[0][0] != arr[0][1]);

	for(int i = 0; i < n; i++) {
		for(int j = 0; j < n; j++) {
			
            if(i == j || i + j == n - 1) {
				if(arr[i][j] != arr[0][0]) ans = false;
			}
            else {
				if(arr[i][j] != arr[0][1]) ans = false;
			}
		}
	}
	if(ans) cout << "YES\n";
    else cout << "NO\n";
}