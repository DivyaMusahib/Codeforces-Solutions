#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    int arr[200000];
    for(int i=0; i<t; i++){
        int n;
        int sum=0;
        scanf("%d",&n);
        for(int j=0; j<n; j++){
            scanf("%d",&arr[j]);
            sum+=arr[j];
        }
        for(int k=0; k<n;k++){
            if(arr[k]<(sum/n)){
                printf("NO");
                break;
            }
            else if(arr[k]>=(sum/n)){
                arr[k+1]=arr[k+1]+(arr[k]-(sum/n));             
                // 1 = 1 + (0-avg)
            }
            else{
                printf("Yes");
                break;
            }
        }
    }


    return 0;
}