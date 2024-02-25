#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    sort(s.begin(),s.end());
    
    int ans=0;
    for(int i=0; i<s.length()-1; i++)
    {
        if(s[i]!=s[i+1])
            ans++;
    }

    if(ans % 2 != 0)
        cout<<"CHAT WITH HER!"<< "\n";
    else
        cout<<"IGNORE HIM!"<<"\n";

    return 0;
}