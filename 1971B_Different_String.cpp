#include<bits/stdc++.h>
#define ll long long
#define loop(i,a,b) for(int i=a; i<b; i++)
using namespace std;

int main(){

    #ifndef ONLINE_JUDGE 
    freopen("input.txt", "r", stdin); 
    freopen("output.txt", "w", stdout); 
    #endif 


    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        bool same =true;
        loop(i,1,s.size()){
            if(s[i]!=s[i-1]){
                same = false;
                break;
            }
        }

        if(s.size()==1 || same == true) cout << "NO\n";
        else{
            string k = s;
            sort(k.begin(),k.end());
            cout << "YES\n";
            if(k==s){
                for(int z = (s.size()-1); z>=0; z--){
                    cout << k[z];
                }
            }
            else cout << k;
            cout << "\n";
        }

    }
}
