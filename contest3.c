// #include<stdio.h>
// int check(int arr[x]){
//     int total = 0;
//     if(arr[x] == arr[0])
// }

// int main(){
//     int n;
//     scanf("%d",&n);
    
//     for(int i=0; i<n; i++){
//         int k;
//         scanf("%d",&k);
//         int arr[k];
//         for(int j=0; j<k; j++){
//             scanf("%d",&arr[j]);
//         }
//         for(int l=0; l<k; l++){
//             int sum = check(arr[l]);
//             if (arr[l]== sum){
//                 printf("Ugly");
//             }
//             else{
//                 printf("Beautiful");
//             }
//         }
    
//     }
//     return 0;
// }


// #include <stdio.h>

// void bubbleSort(int arr[], int n) {
//     int i, j, temp;
//     for (i = 0; i < n - 1; i++) {
//         for (j = 0; j < n - i - 1; j++) {
//             if (arr[j] < arr[j + 1]) {
//                 // Swap arr[j] and arr[j+1]
//                 temp = arr[j];
//                 arr[j] = arr[j + 1];
//                 arr[j + 1] = temp;
//             }
//         }
//     }
// }

// int main() {
//     int n, i;
//     printf("Enter the length of the array: ");
//     scanf("%d", &n);
    
//     int arr[n];
//     printf("Enter %d elements of the array: ", n);
//     for (i = 0; i < n; i++) {
//         scanf("%d", &arr[i]);
//     }

//     // Sort the array in descending order
//     bubbleSort(arr, n);

//     printf("Array sorted in descending order: ");
//     for (i = 0; i < n; i++) {
//         printf("%d ", arr[i]);
//     }
//     printf("\n");

//     return 0;
// }


#include <stdio.h>

int main() {
    int NumOfTest;
    scanf("%d",&NumOfTest);
    
    
    int n;
    printf("length of the array: ");
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int sum = 0;
    for (int i = 1; i < n; i++) {
        sum = 0;
        for (int j = 0; j < i; j++) {
            sum += arr[j];
        }
        if (sum == arr[i]) {
            printf("Ugly\n");
            return 0;
        }
    }

    printf("Beautiful\n");
    return 0;
}
