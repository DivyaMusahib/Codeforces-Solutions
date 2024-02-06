#include<stdio.h>
int main(){
    int n,a,b,c;
    scanf("%d",&n);
    for(int i=0; i<n; i++){
        scanf("%d %d %d", &a,&b, &c);
        if((a+b)==c || (b+c)==a || (c+a)==b){
            printf("Yes\n");
        }
        else{
            printf("No\n");
        }
    }
    return 0;
}