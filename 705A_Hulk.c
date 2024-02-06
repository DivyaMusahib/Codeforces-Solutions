#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    if (n%2==0){
        int k= (n/2)-1;
        for(int i=0; i<k; i++){
            printf("I hate that I love that ");
            }
        printf("I hate that I love it");
    }

    else{
        int l= (n+1)/2;
        for(int i=1; i<l; i++){
            printf("I hate that I love that ");
            }
        printf("I hate it");
    }

    return 0;
}