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

    int a = sumofdigits(457);
    printf("%d",a);
}