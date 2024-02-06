#include<stdio.h>
int main(){
    int n,k,l,c,d,p,nl,np;
   
    // n = no. of friends
    // k = no. of bottles
    // l = amount in mm each bottle
    // c = number of lime
    // d = number of slice of lime
    // p = gram of salt
    // nl = required mm in each toast
    // 1 = required slice in each toast
    // np = required grams of salt in each toast

    scanf("%d %d %d %d %d %d %d %d",&n,&k,&l,&c,&d,&p,&nl,&np);

    int DrinksForToast = (k*l)/nl;
    int SliceForToast = c*d;
    int SaltForToast = p/np;

    if(DrinksForToast<=SliceForToast && DrinksForToast<=SaltForToast){
        printf("%d",DrinksForToast/n);
    }
    else if(SliceForToast<=DrinksForToast && SliceForToast<=SaltForToast){
        printf("%d",SliceForToast/n);
        }

    else{
        printf("%d",SaltForToast/n);
    }

    return 0;
}