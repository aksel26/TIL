#include <stdio.h>
int a[10];
int main()
{
    int n, cnt = 0, tmp;

    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {

        tmp = i;
        while (tmp > 0)
        {
            tmp /= 10;
            cnt++;
        }
    }

    printf("%d\n", cnt);

    return 0;
}