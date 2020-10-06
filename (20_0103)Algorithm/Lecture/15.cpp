#include <stdio.h>
#include <time.h>

int main()
{
    clock_t start, end;
    start = clock();
    double result;
    int n;

    scanf("%d", &n);

    int a[n];

    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        a[i] = i;
    }

    for (int i = 2; i < n; i++)
    {
        for (int j = i; j <= n; j += i)
        {
            if (i == j)
                continue;
            a[j] = 0;
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (a[i] == 1)
            continue;
        else if (a[i] != 0)
            cnt++;
        printf("%d ", a[i]);
    }

    printf("%d ", cnt);
    end = clock(); //시간 측정 끝
    result = ((double)(end - start) / CLOCKS_PER_SEC);
    printf("%f", result);
    return 0;
}