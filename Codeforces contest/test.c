#include<stdio.h>
#include<string.h>

int main(){
    int t,n;
    scanf("%d",&t);

    for(int i=0; i<t; i++){
        scanf("%d",&n);
        char arr[n + 1]; // Allocate space for the null character
        for(int j=0; j<n; j++){
            scanf(" %c",&arr[j]); // Notice the space before %c
        }
        arr[n] = '\0'; // Null terminate the string
        int add=0;
        for(int k=0; k<n; k++){
            if(arr[k]=='@') add++; // Use single quotes for characters
            if(arr[k]=='*') break;
        }
        printf("%d\n",add);
    }
    return 0;
}
