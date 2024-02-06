#include<stdio.h>
int main(){
    long n;
    printf("Enter");
    scanf("%ld",&n);
    long power = 1;
    for(int i=0; i<n; i++){
        power= power*5;
    }
    printf("%ld",power%100);
    return 0;
}