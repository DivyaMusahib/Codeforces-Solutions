#include<stdio.h>
int main(){
    int n, p, q, arrp[100], arrq[100];
    scanf("%d",&n);

    scanf("%d",&p);
    for(int i =0; i<n; i++){
        scanf("%d",&arrp[i]);
    }

    scanf("%d",&q);
    for(int i =0; i<n; i++){
        scanf("%d",&arrp[i]);
    }

    int count;
    for(int x=0; x<n; x++){
        for(int i=0; i<p; p++){
            for(int j=0; j<q; j++){
                if((arrp[i] || arrq[j] ) == x){
                    count++;
                }
            }
        }
    }
    
    
    return 0;
}