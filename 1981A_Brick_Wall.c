#include<stdio.h>
int main(){
    int t,n,m;
    scanf("%d",&t);
    for(int i=0; i<t; i++){
        scanf("%d %d",&n,&m);
        printf("%d\n",n*(m/2));
    }
    return 0;
}