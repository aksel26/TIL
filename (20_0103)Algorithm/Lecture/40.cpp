#include <stdio.h>

int main()
{
    int c, i,j, a, b, p1 = 0, p2 = 1;
    int m[101];
    int n[101];
    int l[101];

    scanf("%d", &a);

    for (i = 0; i < a; i++)
    {
        scanf("%d", &m[i]);
    }

    scanf("%d", &b);

    for (i = 0; i < b; i++)
    {
        scanf("%d", &n[i]);
    }

    for (i = 0; i < a; i++)
    {
        for (j = 0; j < b  ; j++)
        {
            if (m[i] == n[j])
            {
                l[p1] = n[j];
                p1++;
            }
            else
            {
                continue;
            }
        }
    }

    for ( i = 0; l[i]!='\0'; i++)
    {
        printf("%d ", l[i]);
    }
    

    return 0;
}