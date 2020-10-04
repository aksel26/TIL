#include <stdio.h>
int a[10];
int main()
{
    int n;

    scanf("%d", &n);

    int tmp;
    int res;
    for (int i = 1; i <= n; i++)
    {
        if (i < 10)
        {
            a[i]++;
        }
        else if (i >= 10)
        {
            tmp = i;
            while (tmp != 0)
            {
                res = tmp % 10;
                a[res]++;
                tmp = tmp / 10;
            }
        }
    }

    int sum = 0;
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", a[i]);
        sum += a[i];
    }

    printf("%d\n", sum);

    return 0;
}