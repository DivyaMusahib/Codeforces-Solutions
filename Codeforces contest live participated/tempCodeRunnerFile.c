#include<stdio.h>
int sumofdigits(int a){
    if (a>=10){
    int b = a % 10;
    a = a/10;
    return b + sumofdigits(a);
    }
    return a;
}


int main(){
    int t;
    scanf("%d",&t);
    
    for(int i=0; i<t; i++){
        int n;
        scanf("%d",&n);
        int arr[n];
        for(int j=0; j<n; j++){
            arr[j]=j+1;
        }

        for(int k=0; k<n; k++){
            if(arr[k]>9) sumofdigits(arr[k]);
        }

        int ans = 0;

        for(int x=0; x<n; x++){
            ans = ans + arr[x];
        }

        printf("%d\n",ans);

    }


    return 0;
}