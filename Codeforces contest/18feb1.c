#include<stdio.h>
int main(){
    int t,n;
    scanf("%d",&t);

    for(int i=0; i<t; i++){
        scanf("%d",&n);
        char arr[n+1];
        for(int j=0; j<n; j++){
            scanf(" %c",&arr[j]);
        }
        int add=0;
        for(int k=0; k<n; k++){
            // printf("%d\n",add);
            if(arr[k]=='@' && arr[k]!='.') add++;
            if(arr[k]=='*' && arr[k+1]=='*') break;
        }
        printf("%d\n",add);
    }
    return 0;
}