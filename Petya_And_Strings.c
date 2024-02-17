#include<stdio.h>
#include<string.h>

int main(){
    char arr1[100];
    char arr2[100];
    scanf("%s",arr1);
    scanf("%s",arr2);

    for(int i=0; i<100; i++){
        if(arr1[i]<=90 && !(arr1[i]>122) && !(arr1[i]<65) && !(arr1[i]>90 && arr1[i]<97)) arr1[i]= arr1[i] + 32;
        if(arr2[i]<=90 && !(arr2[i]>122) && !(arr2[i]<65) && !(arr2[i]>90 && arr2[i]<97)) arr2[i]= arr2[i] + 32;
    }

    // printf("First array is %s\n",arr1);
    // printf("Second array is %s",arr2);

    int count =0;

    for(int j=0; j<100; j++){
        // if("arr1[j]<arr2[j]") printf("%d",-1);
        // else if("arr1[j]>arr2[j]") printf("%d",1);
        
        if(arr1[j]==arr2[j]) {
            count = 0;
            continue;
        }
        if(arr1[j]<arr2[j]) {
            count = -1;
            break;
        }
        if(arr1[j]>arr2[j]) {
            count = 1;
            break;
        }
    }
    printf("%d",count);


    return 0;
}