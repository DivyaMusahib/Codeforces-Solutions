#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        vector<int>arr(n);

        for(int i=0; i<n; i++){
            cin >> arr[i];
        }

        sort(arr.rbegin(),arr.rend());
        long long aliceScore =0;
        long long bobScore =0;

        for(int i=0; i<n; i++){
            if(i % 2 == 0){
			    if(arr[i] % 2 == 0){
				    aliceScore += arr[i];
			    }
		    }
		    else{
			    if(arr[i] % 2 == 1){
				    bobScore += arr[i];
			    }
		    }
        }

        if(bobScore == aliceScore) cout <<"Tie\n";
        else if(bobScore > aliceScore) cout <<"Bob\n";
        else if(bobScore < aliceScore) cout <<"Alice\n";

    }
}
// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int t;
//     cin >> t;

//     while(t--){
//         int n;
//         cin >> n;
//         vector<int>arr(n);
//         vector<int>alice;
//         vector<int>bob;

//         for(int i=0; i<n; i++){
//             cin >> arr[i];
//             if(arr[i]%2==1) bob.emplace_back(arr[i]);
//             else alice.emplace_back(arr[i]);
//         }

//         long long aliceScore =0;
//         long long bobScore =0;

//         if(alice.size()>bob.size()){
//             sort(alice.rbegin(),alice.rend());
//             for(int i=0; i<bob.size(); i++){
//                 aliceScore += alice[i];
//                 bobScore += bob[i];
//             }
//             for(int j=bob.size(); j<alice.size(); j=j+2){
//                 aliceScore += alice[j];
//             }
//             // for(int j=bob.size()+1; j<alice.size(); j=j+2){
//             //     bobScore += alice[j];
//             // }
//         }
//         else if(alice.size()<=bob.size()){
//             sort(bob.rbegin(),bob.rend());
//             for(int i=0; i<alice.size(); i++){
//                 aliceScore += alice[i];
//                 bobScore += bob[i];
//             }
//             // for(int j=alice.size(); j<bob.size(); j=j+2){
//             //     aliceScore += bob[j];
//             // }
//             for(int j=alice.size()+1; j<bob.size(); j=j+2){
//                 bobScore += bob[j];
//             }
//         }

//         if(bobScore == aliceScore) cout <<"TIE\n";
//         else if(bobScore > aliceScore) cout <<"BOB\n";
//         else if(bobScore < aliceScore) cout <<"ALICE\n";

//     }
// }