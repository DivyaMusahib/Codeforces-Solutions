// logic -> we are givena number we want to check how many maximum consecutive divisors are there 
// if a number is odd it will never have even 2 consecutive divisors  reason a odd number is product of two odd so it can never be consecutive
// now if a number is even it can have more than 1 consecutive divisors------we need to calculate maximum number of consecutive divisors
// suppose a number is 10626 = 21 * 22 *23 -> so it has three consecutive divisors so one method is we should list all the divisors and check consecutivity
// other is that if the divisors are consecutive it can be written in 1 * 2 * 3 * 4.......... so the number should be divisble by it
// for example 21 * 22 * 23 can have 1(from 23) * 2(from 22) * 3(from 21)
// for example 21 * 22 * 23 * 24 * 25 * 26 * 27 so it will be divisble by all numbers from 1 to 7 consecutivey so 1(from 23) * 2(from 22) * 3(from 27) * 4(from 24) * 5(from 25) *6(from 24) *7(from 21)

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    
    while(t--){
        long long n; cin >> n;
        int ans = 1;

        while((n% (ans+1)) == 0){
            ans++;
        }
        cout << ans<< "\n";
    }
}