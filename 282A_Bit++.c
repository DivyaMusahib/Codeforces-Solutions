#include<stdio.h>
int main(){

    int t,x=0;

    scanf("%d",&t);

    for(int i=0; i<t; i++){
        char arr[3];
        for(int j=0; j<3; j++){
        scanf("%c",&arr[j]);
        }
        if(arr[0]=='+' || arr[2]=='+') {++x;}
        else if(arr[0]=='-' || arr[2]=='-') {--x;}
    }
    
    printf("%d",x);


    return 0;
}