#include<stdio.h>
int func(int n, int m){
    for(int i=1; i<n+1; i++){
        m = m - i;
        if(m<0){
            m = m + i;
            return m;
            break;
        }
        else if(i==n ) return func(n,m);
    }
}
int main(){
    int n,m;
    scanf("%d %d",&n,&m);
    int total = m;
    int ans = func(n,m);
    printf("%d",ans);
    return 0;
}