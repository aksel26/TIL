#include <stdio.h>
#include <time.h>

int main()
{

    clock_t start, end;
    start = clock();
    double clockResult;

    int n, m;

    scanf("%d %d", &n, &m);

    int temp[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &temp[i]);
    }

    int max = -2147000;
    int sum;
    int res = 0;
    int idx = 0;

    for (int i = 0; i < n - m; i++)
    {
        sum = 0;
        for (int j = i; j < i + m; j++)
        {
            sum += temp[j];
        }

        if (sum > max)
            max = sum;
    }

    printf("%d\n", max);

    end = clock(); //시간 측정 끝
    clockResult = ((double)(end - start) / CLOCKS_PER_SEC);
    printf("%f", clockResult);

    return 0;
}