#include <stdio.h>
int main()
{
    int w, x, y, z;

    // a+b, a+c, b+c and a+b+c
    scanf("%d %d %d %d", &w, &x, &y, &z);

    int k=z-w;
    int l=z-x;
    int m=z-y;

    if(k<=0){
        k = -k;
        l = l + k;
        m = m + k;
    }

    if(l<=0){
        l = -l;
        k = k + l;
        m = m + l;
    }

    if(m<=0){
        m = -m;
        l = l + m;
        k = k + m;
    }


    printf("%d %d %d", k, l, m);
    return 0;

}