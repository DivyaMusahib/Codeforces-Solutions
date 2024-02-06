#include<stdio.h>
int main(){
    int k,n;
    long w;
    // k= cost of 1st banana
    // n = amount of dollars he have
    // w= number of bananas

    int cost=0;
    int total=0;
    scanf("%d %d %ld",&k,&n,&w);

    for(int i=0; i<w; i++){
        cost+=k;
        total+=cost;
    }
    if(total>n){
        printf("%d",total-n);
    }
    else{
        printf("%d",0);
    }

    return 0;
}
