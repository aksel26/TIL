#include <stdio.h>

int main()
{
    int n, left = 1, right, cur, k = 1;

    scanf("%d", &n);
    int res = 0;
    while (left != 0)
    {
        left = n / (k * 10);
        cur = (n / k) % 10;
        right = n % k;

        if (cur < 3)
        {

            res = res + (left * k);
        }
        else if (cur > 3)
        {
            res = res + ((left + 1) * k);
        }
        else if (cur == 3)
        {
            res = res + ((left * k) + (right + 1));
        }
        k *= 10;
    }

    printf("%d\n", res);

    return 0;
}