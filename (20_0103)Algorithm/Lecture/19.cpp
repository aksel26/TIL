#include <stdio.h>
#include <time.h>

int main()
{
    clock_t start, end;
    start = clock();
    double clockResult;

    int n;
    int h[101];
    int cnt = 0;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &h[i]);
    }
    int max = h[n - 1];
    for (int i = n - 1; i >= 0; i--)
    {

        if (h[i] > max)
        {
            max = h[i];
            cnt++;
        }
    }
    printf("%d\n", cnt);

    end = clock(); //시간 측정 끝
    clockResult = ((double)(end - start) / CLOCKS_PER_SEC);
    printf("%f", clockResult);

    return 0;
}