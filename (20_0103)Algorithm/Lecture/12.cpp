#include <stdio.h>
int a[10];
int main()
{
    int n, sum = 0, c = 1, d = 9, res = 0;

    scanf("%d", &n);

    while (sum + d < n)
    {
        res = res + (c * d);
        sum = sum + d;

        // 다음자리
        c++;
        d = d * 10;
    }

    res = res + ((n - sum) * c);

    printf("%d ", res);

    return 0;
}