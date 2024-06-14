#include<bits/stdc++.h>
using namespace std;


int main(){ 
    int n;
    cin>>n;
    int b=110,c=-1,x=-1,y=n+1;
    int a[105];
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n;i++)
        {
            if(a[i]>c) {c=a[i];x=i;}
            if(a[i]<=b) {b=a[i];y=i;}
        }
    if(x<y)
    {
        cout<<x+n-1-y<<endl;
        return 0;
    }
    cout<<x+n-1-y-1<<endl;
	return 0;
}