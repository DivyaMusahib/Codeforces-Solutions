#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    for(int i=0; i>=0; i++){
        n++;
        int a = n%10;
        int b= (n/10)%10;
        int c= (n/100)%10;
        int d= (n/1000)%10;
        if(a==b || a==c || a==d || b==c || b==d || c==d ){
        }
        else{
            printf("%d",n);
            break;
    }
    }
}