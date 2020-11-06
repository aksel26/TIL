#include <stdio.h>

int a[11][11], b[11];

int main(int argc, char const *argv[])
{
    int n, i, j, sum = 0;

    scanf("%d", &n);

    //정면처리
    for (i = 1; i <= n; i++)
    {
        scanf("%d", &b[i]);
    }

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            a[j][i] = b[i];
        }
    }

    for (i = n; i >= 1; i--)
    {
        scanf("%d", &b[i]);
    }

    // 깎아 내리는 반복문
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            if (a[i][j] > b[i])
            {
                a[i][j] = b[i];
            }
        }
    }

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            sum += a[i][j];
        }
    }

    printf("%d\n", sum);

    for (i = 1; i <= n; i++)
    {

        for (j = 1; j <= n; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}