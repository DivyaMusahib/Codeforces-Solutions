#include<stdio.h>
int main(){
    int n,p;
    int arr[1000];
    int amazing=0;
    scanf("%d",&n);
    for(int i=0; i<n; i++){ //loop to store
        scanf("%d",&p);
        arr[i]=p;
        int max,min; //max min initiliazed
        for(int k=0; k<i; k++){ //loop to check max and min
            max = arr[i];
            if(arr[i]<=arr[k]){
                max = arr[k];
            }
            min <= arr[i];
            if(arr[i]>arr[k]){
                min = arr[k];
            }
            }
            if(max==arr[i]){
                amazing++;
            }
            if(min==arr[i]){
                amazing++;
            }
    }
    printf("%d",amazing);
    return 0;    
}