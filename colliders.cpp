#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    long long n, t;
    cin >> n >> t;

    vector<pair<long long, long long>> allPrimes;
    vector<bool> a(n + 1, true);

    for(long long i = 2; i < n + 1; i++){
        if(a[i] == true){
            allPrimes.push_back({i, -1});
            for(long long j = i * i; j < n + 1; j += i){
                a[j] = false;
            }
        }
    }

    vector<bool> arr(n + 1, 0);
    string s1, s2;
    while(t--){
        cin >> s1 >> s2;
        long long num = stoll(s2);

        if(s1[0] == '+'){
            if(arr[num]) cout << "Already on\n";
            else{
                bool mila = false;
                for(long long i = 0; i < allPrimes.size(); i++){
                    if(num % allPrimes[i].first == 0 && allPrimes[i].second != -1){
                        mila = true;
                        cout << "Conflict with " << allPrimes[i].second << "\n";
                        break;
                    }
                }

                if(mila == false){
                    for(long long i = 0; i < allPrimes.size(); i++){
                        if(num % allPrimes[i].first == 0){
                            allPrimes[i].second = num;
                        }
                    }
                    arr[num] = true;
                    cout << "Success\n";
                }
            }
        }
        else{
            if(arr[num]){
                arr[num] = false;
                for(long long i = 0; i < allPrimes.size(); i++){
                    if(num % allPrimes[i].first == 0){
                        allPrimes[i].second = -1;
                    }
                }
                cout << "Success\n";
            }
            else{
                cout << "Already off\n";
            }
        }
    }
}
