// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int t;
//     cin >> t;

//     for (int i = 0; i < t; i++)
//     {
//         int n, x;
//         cin >> n >> x;

//         vector<int> v(n);
//         for(int j=0; j<n; j++){
//             cin >> v[j];
//         }

//         int max=v[0],max2=v[0];
//         for(int k=0; k<n; k++){
//             if(v[k]>max) max = v[k];
//         }

//         for(int l=0; l<n; l++){
//             if(v[l]>max2 && max2<max) max2 = v[l];
//         }

//         if((max-max2) >= 2*(x - max)) cout << max - max2 << "\n";
//         else cout << 2*(x - max) << "\n";
        
//     }
//     return 0;
// }

#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);

    for(int i=0; i<t; i++){
        int n,x;
        scanf("%d %d",&n,&x);
        int arr[n], max=0, max2=0;

        for(int j=0; j<n; j++){
            scanf("%d",&arr[j]);
            if(arr[j]>max) max= arr[j];
        }

        for(int k=0; k<n; k++){
            if(arr[k]>max2 && arr[k]<max) max2=arr[k];
        }

        if((max-max2) >= 2*(x - max) && (max-max2) >= max2) printf("%d\n",max-max2);
        else if(2*(x - max) >= max2) printf("%d\n",2*(x-max));
        else printf("%d\n",max2);
    }

    return 0;
}