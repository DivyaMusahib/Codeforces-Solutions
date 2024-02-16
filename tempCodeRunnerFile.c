#include<stdio.h>
int main(){
    int t,x;
    scanf("%d",&t);

    for(int i=0; i<t; i++){
        scanf("%d",&x);
        int firstthree =  ((x/1000)%10) + ((x/10000)%10) + ((x/100000)%10);
        int lastthree = (x%10) + ((x/10)%10) + ((x/100)%10);
        if(firstthree == lastthree) printf("YES");
        else printf("NO");
    }

    return 0;
}