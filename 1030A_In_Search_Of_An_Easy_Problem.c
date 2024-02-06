#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int sum=0;
    int x;

    for(int i=0; i<n; i++){
        scanf("%d",&x);
        sum = sum +x;
    }

    if(sum==0){
        printf("EASY");
    }
    else{
        printf("HARD");
    }

    return 0;
}