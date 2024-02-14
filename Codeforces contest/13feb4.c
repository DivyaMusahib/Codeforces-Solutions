#include <stdio.h>

int count_beautiful_pairs(int n, int x, int y, int a[]) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if ((a[i] + a[j]) % x == 0 && (a[i] - a[j]) % y == 0) {
                count++;
            }
        }
    }
    return count;
}

int main() {
    int t;
    scanf("%d", &t);

    for (int test_case = 0; test_case < t; test_case++) {
        int n, x, y;
        scanf("%d %d %d", &n, &x, &y);

        int a[n];
        for (int i = 0; i < n; i++) {
            scanf("%d", &a[i]);
        }

        int result = count_beautiful_pairs(n, x, y, a);
        printf("%d\n", result);
    }

    return 0;
}