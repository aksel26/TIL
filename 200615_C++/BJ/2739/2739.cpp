#include <stdio.h>

int main()
{

    int n;
    scanf("%d", &n);

    for (int i = 1; i <= 9; i++)
    {
        for (int j = 1; j <= 1; j++)
        {
            printf("%d * %d = %d\n", n, i, n * i);
        }
    }

    return 0;
}