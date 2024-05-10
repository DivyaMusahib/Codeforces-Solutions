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
        int n,k,q;
        cin >>n >> k >> q;

        vector<int>a(k+1);
        vector<int>b(k+1);

        a[0]=0,b[0]=0;
        for(int i=1; i<=k;i++){
            cin >> a[i];
        }

        for(int i=1; i<=k;i++){
            cin >> b[i];
        }


        for(int i=0; i<q; i++){
            int temp;
            cin >> temp;
            long double time= 0;
            int posindex = lower_bound(a.begin(),a.end(),temp) - a.begin();
            // cout << posindex <<"is pos index ";
            if(a[posindex]==temp){
                cout << b[posindex] << " ";
            }
            else{
                time += b[posindex-1];
                // double extraDis = temp-a[posindex-1];
                // double speed = (a[posindex]-a[posindex-1])/(b[posindex]-b[posindex-1]); 
                // double extratime = extraDis/speed;
                long double extratime = ((long double)(temp-a[posindex-1])*(long double)(b[posindex]-b[posindex-1]))/(a[posindex]-a[posindex-1]);
                // cout << extratime << " is extratime";
                time += extratime;
                time = (long long) time;
                cout << fixed << setprecision(0) << time <<" ";

            }

        }


        cout << "\n";


    }
}
