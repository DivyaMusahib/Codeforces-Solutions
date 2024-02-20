#include <stdio.h>

int sumOfDigits(int n) {
    int sum = 0;
    while (n != 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main() {
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++) {
        int n;
        scanf("%d", &n);

        int ans = 0;
        for (int j = 1; j <= n; j++) {
            if (j > 9)
                ans += sumOfDigits(j);
            else
                ans += j;
        }

        printf("%d\n", ans);
    }

    return 0;
}
