#include <stdio.h>
int a[100];
int main()
{

    int n, i, j;

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int tmp;
    for (i = 1; i < n; i++)
    {
        tmp = a[i];
        for (j = i - 1; j >= 0; j--)
        {

            if (a[j] > tmp)
                a[j + 1] = a[j];
            else
                break;
        }
        a[j + 1] = tmp;
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}