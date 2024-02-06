#include<stdio.h>
int main(){
    long a, n;
    scanf("%ld %ld",&a,&n);

    for(int i=0; i<n; i++){
        if(a%10 == 0){
            a = a/10;
        }
        else{
            a =a-1;
        }
    }
    printf("%ld",a);
}



// wrong code before
// #include <stdio.h>

// int main() {
//     long n, times;
//     scanf("%ld %ld", &n, &times);

//     long ans = 0;

//     if ((int)n % 10 == 0) { 
//             ans = n / 10; 
//         } else {
//             ans = n - 1;
//         }

//     for (int i = 1; i < times; i++){
//         if ((int)ans % 10 == 0) { 
//             ans = n / 10; 
//         } else {
//             ans = ans - 1;
//         }
//     }

//     printf("%ld\n", ans);

//     return 0;
// }