#include<bits/stdc++.h>
using namespace std;

typedef long long ll; 
typedef vector<ll> v64; 
typedef vector<int> v32; 
#define loop(i, a, b) for(ll i = a; i < b; i++)
#define all(x) (x).begin(), (x).end() 

void solve(){
    long long n;
    cin >> n;

    vector<long long>a(n+1);
    vector<long long>b(n+1);

    for(long long i=0; i<n; i++) cin >> a[i];
    for(long long i=0; i<=n; i++) cin >> b[i];

    long long find = b[n];
    bool milgaya = false;
    long long mini = INT_MAX; 
    for(long long i=0; i<n; i++){
        if(a[i]==find){
            a[n] = find;
            milgaya = true;
            break;
        }
        mini = min(mini, abs(find-a[i]));
    }

    long long count = 1;

    for(long long i=0; i<n; i++){
        count += abs(a[i]-b[i]);
    }

    bool flag = false;

    if(milgaya == false){
        for(long long i=0; i<n; i++){
            if(find > min(a[i],b[i]) && find < max(a[i],b[i])) flag = true;
        }
    }

    for(long long i=0; i<n; i++){
        mini = min(mini, abs(find-b[i]));
    } 

    if(flag == false && milgaya == false) count += mini;

    cout << count;
}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    #ifndef ONLINE_JUDGE 
    freopen("input.txt", "r", stdin); 
    freopen("output.txt", "w", stdout); 
    #endif

    long long t;
    cin >> t;

    while(t--){
        solve();
        cout << "\n";
    }
    
}