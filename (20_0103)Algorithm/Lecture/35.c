#include <stdio.h>

int a[100];
int main()
{
    int n, tmp;

    scanf("%d", &n);

    int idx;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    
    for (int i = 0; i < n; i++)
    {
        idx = i;
        while (a[idx - 1] > 0 && a[idx] < 0)
        {

            tmp = a[idx - 1];
            a[idx - 1] = a[idx];
            a[idx] = tmp;
            idx--;
        }
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}