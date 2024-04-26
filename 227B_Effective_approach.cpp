#include<bits/stdc++.h>
using namespace std;

int binarySearch(vector<pair<int,int>>&arr, int finder){
    int low =0, high = arr.size()-1;
    while(low<=high){
        int mid = (low+high)/2;
        if(arr[mid].first==finder) return arr[mid].second;
        else if(arr[mid].first>finder){
            high = mid-1;
        }
        else{
            low = mid+1;
        }        
    }
    if(low>high) return arr.size();
    
}

int main(){
    long long n;
    cin >> n;
    vector<pair<int,int>>arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i].first;
        arr[i].second = i+1;
    }

    sort(arr.begin(),arr.end());

    long long m;
    cin >> m;
    vector<int>items(m);
    for(int j=0; j<m; j++){
        cin >> items[j];
    }

    long long ans1 =0, ans2=0;
    for(int k=0; k<m; k++){
        int one = binarySearch(arr,items[k]);
        int two = n - one + 1;

        ans1 += one;
        ans2 += two;
    }

    cout << ans1 << " " << ans2;
}



/********************************** old unaccepted codes ******************************/

// #include<bits/stdc++.h>
// using namespace std;

// int binarySearch(vector<int>arr, int finder){
//     int low =0, high = arr.size()-1;
//     while(low<=high){
//         int mid = (low+high)/2;
//         if(arr[mid]==finder) return mid;
//         else if(arr[mid]>finder){
//             high = mid-1;
//         }
//         else{
//             low = mid+1;
//         }        
//     }
//     if(low>high) return 0;
    
// }

// int main(){
//     long long n;
//     cin >> n;
//     vector<int>arr(n);
//     for(int i=0; i<n; i++){
//         cin >> arr[i];
//     }

//     long long m;
//     cin >> m;
//     int items[m];
//     for(int j=0; j<m; j++){
//         cin >> items[j];
//     }

//     long long ans1 =0, ans2=0;
//     for(int k=0; k<m; k++){
//         ans1 = binarySearch(arr,items[k]) + 1;
//         ans2 = n - ans1 + 1;
//     }

//     cout << "ans is " << ans1 << " " << ans2;
// }


// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     long long n;
//     cin >> n;
//     vector<int>arr(n);
//     for(int i=0; i<n; i++){
//         cin >> arr[i];
//     }

//     long long m;
//     cin >> m;
//     int items[m];
//     long long ans1 =0, ans2=0;
//     for(int j=0; j<m; j++){
//         cin >> items[j];
//         ans1 = ans1+ lower_bound(arr.begin(),arr.end(),items[j]) - arr.begin() + 1;
//     }


//     cout << ans1 << " " << ans2;
// }




// #include<bits/stdc++.h>
// using namespace std;

// long long linearSearchBegin(vector<int>arr, int finder){
//     long long count =0;
//     for(int i=0; i<arr.size(); i++){
//         if(arr[i]!=finder) count++;
//         else if(arr[i]==finder){
//             count++;
//             break;
//         }
//     }
//     return count;
// }

// long long linearSearchEnd(vector<int>arr, int finder){
//     long long count =0;
//     for(int i=arr.size()-1;i>=0; i--){
//         if(arr[i]!=finder) count++;
//         else if(arr[i]==finder){
//             count++;
//             break;
//         }
//     }
//     return count;
// }

// int main(){
//     long long n;
//     cin >> n;
//     vector<int>arr(n);
//     for(int i=0; i<n; i++){
//         cin >> arr[i];
//     }

//     long long m;
//     cin >> m;
//     int items[m];
//     for(int j=0; j<m; j++){
//         cin >> items[j];
//     }

//     long long ans1 =0, ans2=0;
//     for(int k=0; k<m; k++){
//         ans1 = ans1 + linearSearchBegin(arr, items[k]);
//         ans2 = ans2 + linearSearchEnd(arr, items[k]);
//     }

//     cout << ans1 << " " << ans2;
// }