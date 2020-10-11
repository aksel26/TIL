#include <stdio.h>
#include <vector>
#include <time.h>

int main()
{

    clock_t start, end;
    start = clock();
    double clockResult;

    int n, k, sum = 0, max;

    scanf("%d %d", &n, &k);
    std::vector<int> a(n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < k; i++)
    {
        sum += a[i];
    }
    max = sum;

    for (int i = k; i < n; i++)
    {
        sum = sum + (a[i] - a[i - k]);
        if (sum > max)
            max = sum;
    }

    printf("%d\n", max);

    end = clock(); //시간 측정 끝
    clockResult = ((double)(end - start) / CLOCKS_PER_SEC);
    printf("%f", clockResult);

    return 0;
}