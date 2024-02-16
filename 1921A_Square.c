#include<stdio.h>
int main(){
    int t,x1,y1,x2,y2,x3,y3,x4,y4;
    scanf("%d",&t);

    for(int i=0; i<t; i++){

        scanf("%d %d",&x1,&y1);
        scanf("%d %d",&x2,&y2);
        scanf("%d %d",&x3,&y3);
        scanf("%d %d",&x4,&y4);
        
        if(y1==y2) printf("%d\n",(x2-x1)*(x2-x1));
        if(y1==y3) printf("%d\n",(x3-x1)*(x3-x1));
        if(y1==y4) printf("%d\n",(x4-x1)*(x4-x1));

    }

    return 0;
}