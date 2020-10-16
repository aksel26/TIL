#include <stdio.h>

int fact(int x)
{

    if (x == 1)
        return 1;

    return fact(x - 1) * x;
}

int main()
{
    int n;

    scanf("%d", &n);

    int temp = fact(n);

    int cnt = 0;
    int max = -2147000;
    while (temp != 0)
    {
        int num = temp % 10;
        if (num == 0)
        {
            cnt++;
            if (cnt > max)
            {
                max = cnt;
            }
        }
        else
        {
            cnt = 0;
        }

        temp /= 10;
    }

    printf("%d\n", max);

    return 0;
}