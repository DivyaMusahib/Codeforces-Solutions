#include<stdio.h>
#include<string.h>
int main(){
    int t;
    scanf("%d",&t);

    char arr[6];

    for(int i=0; i<t; i++){
    scanf("%s",arr);
    int counta=0;
    int countb=0;

    for(int j=0; j<6; j++){
        if(arr[j]=='A') counta++;
        else if  (arr[j]=='B') countb++;
    }

        if(counta>countb) printf("A\n");
        else if(counta<countb) printf("B\n");
    }
    return 0;
}