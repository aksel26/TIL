#include <stdio.h>

int main()
{

    int n, i, pre, now;

    scanf("%d", &n);

    scanf("%d", &pre);
    int cnt = 1;
    int max = 1;
    for (i = 2; i <= n; i++)
    {
        scanf("%d", &now);
        if (now >= pre)
        {
            cnt++;
            if (cnt > max)
            {
                max = cnt;
            }
        }
        else
        {
            cnt = 1;
        }
        pre = now;
    }

    printf("%d\n", max);
    return 0;
}