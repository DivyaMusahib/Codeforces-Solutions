#include<stdio.h>
int main(){
    int t,n,x,y;
    scanf("%d",&t);

    for(int i=0; i<t; i++){
        scanf("%d %d %d",&n,&x,&y);
        int a[n];
        for(int j=0; j<n; j++){
            scanf("%d",&a);
        }
        int count=0;
        for(int k=0; k<n-1; k++){
            for(int l=k+1; l<n-1; l++){
                if ( ((a[k]+a[l]) % x ==0) && ((a[k]-a[l]) % y ==0) ) count++;

            }
        }

        printf("%d\n",count);
    } 
    return 0;
}