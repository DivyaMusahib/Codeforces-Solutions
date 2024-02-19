#include<stdio.h>
int main(){
    int t,a,b;
    scanf("%d",&t);

    for(int i=0; i<t; i++){
        scanf("%d %d",&a,&b);
        int count =0;
        for(int j=1; j>0; j++){
            if(a+10<=b && a<b){
            a = a+10;
            count++;
            }
            else if(a+10 > b && a<b){
                count++;
                a = b;
                break;
            }
            else if(a-10>=b && b<a){
                a = a-10;
                count++;
            }
            else if(a-10<b && b<a){
                count++;
                a = b;
                break; 
            }

            else if(a==b) break;

        }
        printf("Count is %d\n",count);

    }

    return 0;
}