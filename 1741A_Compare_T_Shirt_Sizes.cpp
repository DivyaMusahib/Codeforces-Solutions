#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){

        string a,b;
        cin>>a>>b;
        long long n=a.size();
        long long m=b.size();
        char x=a[n-1];
        char y=b[m-1];
        if(a==b){
            cout<<"=\n";
        }
        else if(x==y){
            if(x=='S'){
                if(n>m){
                    cout<<"<\n";
                }
                else{
                    cout<<">\n";
                }
            }
            
            else if(x=='L'){
                if(n<m){
                    cout<<"<\n";
                }
                else{
                    cout<<">\n";
                }
            }
        }
        
        else if(x=='L'){
            cout<<">\n";
        }
        else if(x=='M'&&y=='S'){
            cout<<">\n";
        }
        else if(y=='L'){
            cout<<"<\n";
        }
        else if(y=='M'&&x=='S'){
            cout<<"<\n";
        }
    
    }
}