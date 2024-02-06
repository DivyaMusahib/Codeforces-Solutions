#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[10000000];
    int group=1;
    scanf("%d",&arr[0]);


    for(int i=1; i<n; i++){
        scanf("%d",&arr[i]);
    if(arr[i-1]!=arr[i]){
        group++;
    }
    }
    printf("%d",group);
    return 0;
}