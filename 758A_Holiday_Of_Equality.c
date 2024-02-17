#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    int max = 0 ;
    int add = 0;

    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
        if(arr[i]>max) max = arr[i];
    }
    
    for(int j=0; j<n; j++){
        add = add + (max - arr[j]);
    }

    printf("%d",add);
    return 0;
}