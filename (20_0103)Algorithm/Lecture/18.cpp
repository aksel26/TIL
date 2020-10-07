#include <stdio.h>
#include <time.h>

int main()
{
    clock_t start, end;
    start = clock();
    double clockResult;

    int n, val, m, res, max = -21470000;
    int a = 0;
    scanf("%d %d", &n, &val);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &m);
        if (m > val)
        {
            a++;
        }
        else
        {
            a = 0;
        }

        res = a;
        if (max < res)
            max = res;
    }
    if (max == 0)
        printf("-1\n");
    else
        printf("%d\n", max);

    end = clock(); //시간 측정 끝
    clockResult = ((double)(end - start) / CLOCKS_PER_SEC);
    printf("%f", clockResult);

    return 0;
}