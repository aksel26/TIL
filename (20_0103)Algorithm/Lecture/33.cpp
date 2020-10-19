#include <stdio.h>

int main()
{
    int n, idx, tmp, cnt = 0;
    scanf("%d", &n);

    int a[100];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < n - 1; i++)
    {
        idx = i;

        for (int j = i + 1; j < n; j++)
        {
            if (a[j] > a[idx])
                idx = j;
        }

        tmp = a[i];
        a[i] = a[idx];
        a[idx] = tmp;
    }

    // 석차 구하는 부분
    for (int i = 1; i < n; i++)
    {
        if (a[i - 1] != a[i])
            cnt++;
        if (cnt == 2)
        {
            printf("%d ", a[i]);
            break;
        }
    }

    return 0;
}