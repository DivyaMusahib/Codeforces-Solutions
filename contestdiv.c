#include<stdio.h>
int main(){
    int n,a,b;
    scanf("%d",&n);
    for(int i=0; i<n; i++){
        scanf("%d %d",&a,&b);
        if(a==1 && b==1){
            printf("NO\n");
        }
        else if( (a%2)!=0 && (b%2)!=0)
            printf("NO\n");
        
        else if( (a/2)==b && (b/2)!=a){
            printf("NO\n");
        }

        else if((b/2)==a && (a/2)!=b ){
            printf("NO\n");
        }

        else{
            printf("YES\n");
        }

    }
    return 0;
    
}