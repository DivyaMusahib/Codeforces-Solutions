#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;

    for(int k=0; k<t; k++){
        int n;
        cin >> n;
        int arr[n];

        for(int l=0; l<n; l++){
            cin >> arr[l];
        }

        int count =0;

        for(int i=0;i<n; i++){
            for(int j=i+1; j<n; j++){
                if(arr[i]*arr[j] == i + j + 2) count++;
            }
        }
        
        cout << count << "\n";

    }
    return 0;
}



vector<int> V(2*N+1, 0);
for (int i = 1; i <= N; i++) {
    int a;
    cin >> a;
    V[a] = i;
}
int ans = 0;
for (int i = 1; i*(i+1) <= 2*N; i++) {
for (int j = i+1; j <= 2*N/i; j++) {
if (V[i] && V[j] && V[i]+V[j] == i*j) ans++;
}
}
cout << ans << '\n';
}
}


int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		ll arr[n];
		for (int i = 0; i < n; i++)
			cin >> arr[i];
		int count1 = 0;
		for (int i = 0; i < n; i++) {
			int val = arr[i];
			for (int j = val; j <= 2 * n; j += val) {
				int product = j;
				int secondIndex = product - (i + 1);
				if (secondIndex > (i + 1) && secondIndex <= n && arr[secondIndex - 1] == (product / val)) {
					count1++;
				}
			}
		}
		cout << count1 << nline;
	}