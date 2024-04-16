// logic there wil be atmost 2 operation requaired 
// if all elements are zero then 0 operaton
// if any number of zeroes 1st operation converting whole to mex then the mex of new array will be 0 only that is 2nd operation
// if start and end have zeroes then then 1 operation that is on in between subaaray



#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        vector<long long>arr(n);
        vector<long long>arr_sum;

        long long prefixSum =0, l=-1, r=0;

        for(int i=0; i<n; i++){
            cin >> arr[i];
            prefixSum += arr[i];
            arr_sum.push_back(prefixSum);

            if(arr[i]!=0 && l==-1) l=i;
            if(arr[i]!=0 ) r=i;
        }

        if(prefixSum==0) cout << 0 << endl;
        else{
            bool flag= false;

            for(int i=l; i<=r; i++){
                if(arr[i]==0) flag =true;
            }

            if(flag==true) cout<< 2 << endl;
            else if(flag==false && ((l==0) || (l>0 && arr_sum[l-1]==0)) && (arr_sum[n-1]-arr_sum[r])==0) cout << 1 << endl;
        }


    }
}




// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int t;
//     cin >> t;

//     while(t--){
//         long long n;
//         cin >> n;
//         long long count =0,count2=0;
//         vector<int>arr(n);

//         for(int i=0; i<n; i++){
//             cin >> arr[i];
//         }

//         for(int i=0; i<n; i++){
//             if(arr[i]==0) count2++;
//             if(arr[i]==0 && i!=n-1){
//                 if(arr[i+1]!=0) count++;
//             }
//             if(i==n-1 && arr[i]==0) count++;
//         }

//         if(count2==n) cout << 0 << endl;
//         else if((arr[0]==0 && arr[n-1]!=0) || (arr[0]!=0 && arr[n-1]==0)) cout << count << endl;
//         else if(arr[0]==0 && arr[n-1]==0) cout << count -1 << endl;
//         else if(arr[0]!=0 && arr[n-1]!=0) cout << count + 1<< endl;

//     }
// }