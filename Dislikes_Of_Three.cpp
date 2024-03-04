// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int t;
//     cin >> t;

//     for(int i=0; i<t; i++){
//         int k;
//         cin >> k;
//         int count =0;
//         for(int j=1; j<=k; j++){
//             if(j%10==3 || j%3==0) count++;
//         }
//         cout << "ans" << k + count << "\n";
//     }
//     return 0;
// }


#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    for(int i=0; i<t; i++){
        int k;
        cin >> k;
        int count =1;
        vector<int>arr;
        for(int j=0; j<k; j++){
            if(count%10!=3 && count%3!=0){
                arr.push_back(count);
                count++;
            }
            else if((count%10==3 || count%3==0) && ((count+1)%10!=3 && (count+1)%3!=0)){
                count = count + 1;
                arr.push_back(count);
            }
            else if((count%10==3 || count%3==0) && ((count+1)%10==3 || (count+1)%3==0)){
                count = count +2;
                arr.push_back(count);
            }

        }
        cout << "ans" << arr[k-1] << "\n";
    }
    return 0;
}