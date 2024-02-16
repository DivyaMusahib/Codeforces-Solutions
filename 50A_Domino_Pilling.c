#include<stdio.h>
int main(){
    int m,n;
    scanf("%d %d",&m,&n);
    int area=m*n;

    //case-1 area even
    if (area%2==0) printf("%d",area/2);

    //case-2 area odd
    else printf("%d",(area-1)/2);

    return 0;
}



// previous thinking

// #include<stdio.h>
// int main(){
//     int m,n;
//     scanf("%d %d",&m,&n);

//     //case-1 both even
//     if (m%2==0 && n%2==0) printf("%d",(m*n)/2);

//     //case-2 one even & one odd
//     else if (m%2==0 && n%2!=0) printf("%d",(m/2)*n);
//     else if (m%2!=0 && n%2==0) printf("%d",(n/2)*m);

//     //case-3 both odd
//     else if(m%2!=0 && n%2!=0){
//         if(m>n) printf("%d",(m/2)*n);
//         else printf("%d",(n/2)*m);
//     }

//     return 0;
// }