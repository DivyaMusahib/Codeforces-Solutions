#include<stdio.h>
int main(){
    int k,l,m,n,x;
    int t=0;
    scanf("%d",&k);
    scanf("%d",&l);
    scanf("%d",&m);
    scanf("%d",&n);
    scanf("%d",&x);
    // x is total no.of dragons she counted
    // t is no. of dragons beaten
    for(int i=1;i<=x;i++){
        
    if(i%k==0){
        t=t+1;
    }
    else if(i%l==0){
        t=t+1;
    }
    else if(i%m==0){
        t=t+1;
    }
    else if(i%n==0){
        t=t+1;
    }
    }
   printf("%d",t);
}