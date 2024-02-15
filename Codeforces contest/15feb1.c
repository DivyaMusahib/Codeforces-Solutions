#include <stdio.h>

int main() {
    int t, n;
    scanf("%d", &t);
    int arr[500];
    for (int i = 0; i < t; i++) {
        scanf("%d", &n);
        for (int j = 0; j < n; j++) {
            scanf("%d", &arr[j]);
        }
        int max = arr[0];
        int min = arr[0];
        for (int k = 0; k < n; k++) {
            if (max < arr[k]) max = arr[k];
            if (min > arr[k]) min = arr[k];
        }
        printf("%d\n", max - min);
    }
    return 0;
}
