#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int a, b, c, d;
    for (int i = 0; i < n; i++)
    {
        scanf("%d %d %d %d", &a, &b, &c, &d);

        int sum = 0;
        if (b > a)
            sum++;
        if (c > a)
            sum++;
        if (d > a)
            sum++;

        printf("%d\n", sum);
    }
    return 0;
}