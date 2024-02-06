#include<stdio.h>
int main(){
    int n;
    int sum=0;
    scanf("%d",&n);
    int x =n/5;
    if(n%5==0){
        printf("%d",x);
    }
    else{
        printf("%d",x+1);
    }
}