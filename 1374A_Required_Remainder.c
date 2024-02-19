#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);

    for(int i=0; i<t; i++){
        int x,y,n;
        scanf("%d %d %d",&x, &y, &n);
        // k % x= y, k<=n
        for(int j=n; j>=0; j--){
            if((j % x) == y ){
            printf("%d\n",j);
            break;
            }
        }

    }
    return 0;
}