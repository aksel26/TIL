#include <stdio.h>

int main()
{
    int a[100], n, idx, i, j, tmp;

    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (i = 0; i < n - 1; i++)
    {
        idx = i;
        for (j = i + 1; j < n; j++)
        {
            if (a[j] < a[idx])
                idx = j;
        }
        tmp = a[i];
        a[i] = a[idx];
        a[idx] = tmp;
    }

    for ( i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    
    return 0;
}