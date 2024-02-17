//  not working



// #include<stdio.h>
// int main (){

// long n,sum=0;
// scanf("%ld",&n);
// for(int i=1; i<=n; i++){
//     if(i%2!=0) sum=sum-i;
//     else sum=sum+i;
// }

// printf("%ld",sum);
// return 0;
// }


#include<stdio.h>
int main(){
    long long n;
    scanf("%lld",&n);
    // (-1+2) + (-3+4) + (-5+6) + ....
    //  1 + 1 + 1 +.....
    if(n%2==0) printf("%ld",n/2);
    else printf("%lld",-n+((n-1)/2));

    return 0;
}