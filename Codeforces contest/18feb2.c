#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);

    for(int i=0; i<t; i++){
        int n;
        scanf("%d",&n);
        int array[n];

        for(int j=0; j<n; j++){
            scanf("%d",&array[j]);
        }
        int year = array[0];
        for(int k=1; k<n; k++){
            if(array[k] > year) year = array[k] ;
            else {
                int x = year / array[k];
                if(x * array[k] > year)  year = x * array[k];
                else year = (x + 1) * array[k];
            }
        }

        printf("%d\n",year);
    }
    return 0;
}