#include<stdio.h>
int main(){
    int a,b,count=0;
    scanf("%d %d",&a,&b);
    for(int i=0; a<=b; i++){
    a=3*a;
    b=2*b;
    count++;
    }
    printf("%d",count);
    return 0;
}