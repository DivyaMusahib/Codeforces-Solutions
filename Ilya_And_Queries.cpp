// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     string s;
//     cin >> s;

//     int t;
//     cin >>t;

//     while(t--){
//         int l,r;
//         cin >>l >>r;
//         int count =0;

//         for(int i=l-1; i<r-1; i++){
//             if(s[i]==s[i+1]) count++;
//         }

//         cout << count << endl;
//     }
// }


#include<stdio.h>
#include<string.h>
int main()
{   int i,j,n,m,l,p[100000],q[100000],b[100000],k;
    char a[100001];
   	gets(a);
   	n=strlen(a);
	scanf("%d",&m);

	b[0]=0;k=0;
	for(i=1;i<n;i++)
	{		if(a[i]==a[i-1]) k++;
				b[i]=k;
	}
	
		for(i=0;i<m;i++)
	{
		scanf("%d %d",&p[i],&q[i]);
	
	}
	for(i=0;i<m;i++)
	{
			printf("%d\n",b[q[i]-1]-b[p[i]-1]);
	}
    return 0;
}