#include<stdio.h>
int main(){
    int n,x,a;
    scanf("%d %d",&n,&x);
    
    int add=0;
    for(int i=0; i<n; i++){
        scanf("%d",&a);
        add = add + a;
    }

    int left = add;
    
    if(left ==0) printf("%d",0);
    else if( (left > 0 && left <= x) || (left < 0 && left >= -x)) printf("%d",1);
    return 0;
}