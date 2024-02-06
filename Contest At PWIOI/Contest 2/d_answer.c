#include<stdio.h>
int main(){
    int d;
    int k,l,m,n;
    int sum=0;
    scanf("%d %d %d %d %d",&k,&l, &m, &n, &d);
    for(int i=1; i<=d; i++){
        if(i%k==0 || i%l==0 || i%m==0 || i%n==0){
        sum = sum +1;
        }
    }
    printf("%d",sum);
    return 0;

}
