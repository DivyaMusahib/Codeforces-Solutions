// #include<stdio.h>
// int main(){

//     int t,x=0;

//     scanf("%d",&t);

//     for(int i=0; i<t; i++){
//         char arr[3];
//         for(int j=0; j<3; j++){
//         scanf("%c",&arr[j]);
//         }
//         if(arr[0]=='+' || arr[2]=='+') {x=x+1;}
//         else if(arr[0]=='-' || arr[2]=='-') {x=x-1;}
//         printf("Here %d\n",x);
//     }
    
//     printf("%d\n",x);


//     return 0;
// }

#include<stdio.h>
#include<string.h>
int main(){

    int t,x=0;

    scanf("%d",&t);

    for(int i=0; i<t; i++){
        char arr[4];
        scanf("%s",arr);
        if(arr[1]=='+') {++x;}
        else if(arr[1]=='-') {--x;}
    }
    
    printf("%d\n",x);


    return 0;
}