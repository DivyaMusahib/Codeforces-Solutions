#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    int n;
    for(int i=0; i<t; i++){
        int sum=0;
        scanf("%d",&n);
        int arr[n];
        for(int j=0; j<n; j++){
            scanf("%d",&arr[j]);
        }
        
    int temp;
    for(int s=0; s<n; s++)
    {
        for(int q=s+1; q<n; q++) { if(arr[s]>arr[q])
            {
                temp = arr[s];
                arr[s] = arr[q];
                arr[q] = temp;
            }
        }
    }    
        for(int k=0; k<n-1; k=k+2){
            if(arr[k]<=arr[k+1]) sum = sum +arr[k];
            else sum = sum + arr[k+1];
        }
        printf("%d\n",sum);
    }
    return 0;
}
