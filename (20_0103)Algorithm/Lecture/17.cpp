#include <stdio.h>
#include <time.h>

int main()
{
    clock_t start, end;
    start = clock();
    double clockResult;
    int n, a, result, sum = 0;

    scanf("%d", &n);

    int cnt = 0;

    // n과 같은 횟수면 break
    while (cnt != n)
    {
        scanf("%d %d", &a, &result);

        for (int i = 1; i <= a; i++)
        {
            sum += i;
        }
        if (sum == result)
            printf("YES\n");
        else
            printf("NO\n");

        cnt++;
        sum = 0;
    }

    end = clock(); //시간 측정 끝
    clockResult = ((double)(end - start) / CLOCKS_PER_SEC);
    printf("%f", clockResult);

    return 0;
}