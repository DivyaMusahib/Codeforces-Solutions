#include<stdio.h>
int main(){
    int n,k;
    scanf("%d %d",&n, &k);

    int arr[n];
    int result = k;

    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }

    for(int i=k; i<n; i++){
        if(arr[i-1]==arr[i] && arr[i-1]!=0){
            result++;
        }
        else
        break;
    }

    for(int i=k; i>0; i-- ){
        if(arr[i-1]==0){
            result--;
        }
        else
        break;
    }

    printf("%d",result);

    return 0;
}