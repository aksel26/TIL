#include <stdio.h>

int main()
{

    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int cnt = 1;
    int max = -2147000;
    for (int i = 0; i < n; i++)
    {
        if (a[i] <= a[i + 1])
        {
            cnt++;
            if (cnt > max)
            {
                max = cnt;
            }
        }
        else if (a[i] > a[i + 1])
        {
            cnt--;
        }
    }

    printf("%d\n", max);

    return 0;
}