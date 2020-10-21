#include <stdio.h>
int c[20];
int main()
{

    int s, n, a, i, j, pos;
    scanf("%d %d", &s, &n);

    for (i = 1; i <= n; i++)
    {
        scanf("%d", &a);

        pos = -1;

        for (j = 0; j < s; j++)
        {
            if (c[j] == a)
                pos = j;
        }

        // cache miss
        if (pos == -1)
        {
            for (j = s - 1; j >= 1; j--)
                c[j] = c[j - 1];
        }
        //cache hit
        else
        {
            for (j = pos; j >= 1; j--)
                c[j] = c[j - 1];
        }
        c[j] = a;
    }

    for (i = 0; i < s; i++)
        printf("%d ", c[i]);

    return 0;
}