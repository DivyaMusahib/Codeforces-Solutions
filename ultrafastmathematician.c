// #include<stdio.h>
// #include<string.h>
// int main(){

//     char arr1[100];
//     char arr2[100];
//     int arr3[100];
//     scanf("%s",arr1);
//     scanf("%s",arr2);
    
//     for(int i=0; i<100; i++){
//         if(arr1[i]==arr2[i]) arr3[i] = 0;
//         else arr3[i] = 1;
//     }

//     printf("%s",arr3);

//     return 0;
// }



#include<stdio.h>
int main(){

    int arr1[100];
    int arr2[100];
    int arr3[100];

    for(int i=0; i<100; i++){
        scanf("%d",&arr1[i]);
        scanf("%d",&arr2[i]);
        if(arr1[i]==arr2[i]) arr3[i] = 0;
        if(arr1[i]!=arr2[i]) arr3[i] = 1;
    }

    for(int j=0; j<100; j++){
        printf("%d",arr3[j]);
    }

    return 0;
}
