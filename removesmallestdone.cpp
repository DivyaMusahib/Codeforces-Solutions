#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	for(int i=0;i<n;i++){
		int a,ans=0;
		cin >> a;
		int x[a];
		for(int j=0;j<a;j++){
            cin >> x[j];
		}
		for(int j=0;j<a;j++){
		    for(int k=j+1;k<a;k++){
		        if(x[j]>x[k]){
		            int temp=x[j];
		            x[j]=x[k];
		            x[k]=temp;
		        }
		    }
		}
		if(a==1){
			cout << "YES\n";
		}
		else{
			for(int j=0;j<(a-1);j++){
				if(x[j+1]-x[j]>=2){
				    ans=1;
				}
			}
			if(ans==0){
			    cout << "YES\n";
		    }
		    else{
			    cout << "NO\n";
		    }
		}
		
	}
	return 0;
}