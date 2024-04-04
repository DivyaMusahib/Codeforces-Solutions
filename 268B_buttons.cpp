// logic
// example n=5
// 4x1 + 1 => on first place 4 number of digit failed one accepted
// 3x2 + 1 => on second place 3 numbers failed so we have to push the first button again therefore into 2 + 1 accepted
// 2x3 + 1 => on third place 2 numbers failed we have to fill 1st and 2nd position again too therefore into 3 + 1 accepted
// 1x4 + 1
// 0x5 + 1


#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    long long ans=0;

    for(int i=1; i<=n; i++){
        ans += (n-i)*i +1;
    }

    cout << ans;
}
