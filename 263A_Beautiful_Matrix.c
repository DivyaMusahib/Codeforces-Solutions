#include<stdio.h>

int main(){
    int arr[5][5];
    int count=0;
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            scanf("%d",&arr[i][j]);
            if(arr[i][j]==1 && j<=2 && i<=2  ) count = 4 - i - j;
            else if(arr[i][j]==1 && j>=2 && i>=2  ) count = i + j - 4;
            else if(arr[i][j]==1 && j<=2 && i>=2  ) count = i - j;
            else if(arr[i][j]==1 && j>=2 && i<=2  ) count = j - i;
        }
    }

    printf("%d",count);

    return 0;
}