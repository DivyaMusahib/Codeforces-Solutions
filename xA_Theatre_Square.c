#include<stdio.h>
int main(){
    long long n,m,a;
    scanf("%lld %lld %lld",&n, &m, &a);
    long long x,y,z,w;
    x = (n-(n%a))/a;
    y = (m-(m%a))/a;

    if(n%a!=0 && m%a!=0){
        printf("%lld",(y*x)+x+y+1);
    }
    if (n%a!=0 && m%a==0){
        printf("%lld",(y*x)+x);
    }
    if (n%a==0 && m%a!=0){
        printf("%lld",(y*x)+y);
    }
    if(n%a==0 && m%a==0){
        printf("%lld",(y*x));
    }


    return 0;

}



// #include<stdio.h>
// int main(){
//     int n,m,a;
//     scanf("%d %d %d",&n, &m, &a);
//     int x,y,z,w;
//     x = (n-(n%a))/a;
//     y = (m-(m%a))/a;

//     if(n%a!=0 && m%a!=0){
//         printf("%d",(y*x)+x+y+1);
//     }
//     if (n%a!=0 && m%a==0){
//         printf("%d",(y*x)+x+1);
//     }
//     if (n%a==0 && m%a!=0){
//         printf("%d",(y*x)+y+1);
//     }
//     if(n%a=0 && m%a==0){
//         printf("%d",(y*x)+x+1);
//     }


//     return 0;

// }


// #include<stdio.h>
// int main(){
//     int n,m,a;
//     scanf("%d %d %d",&n, &m, &a);
//     int x,y,z,w;
//     x = (n-(n%a))/a;
//     y = (m-(m%a))/a;
//     printf("%d",(y*x)+(n%a)+(m%a)-1);
//     return 0;

// }