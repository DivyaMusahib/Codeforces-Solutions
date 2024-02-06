#include<stdio.h>
int main(){
    int n,a,b;
    scanf("%d",&n);
    for(int i=0; i<n; i++){
        scanf("%d %d",&b, &a);
        if(b%a!=0){
            printf("%d\n",a-(b%a));
        }
        else{
            printf("%d\n",0);
        }
    }
    return 0;
}