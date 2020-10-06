#include <stdio.h>
#include <time.h>

int main()
{
    clock_t start, end;
    start = clock();
    double result;

    int n, flag;

    scanf("%d", &n);

    int cnt = 0;
    for (int i = 2; i <= n; i++)
    {
        flag = 1;
        for (int j = 2; j * j <= i; j++)
        {
            if (i % j == 0)
            {
                flag = 0;
                break;
            }
        }
        if (flag == 1)
            cnt++;
    }

    printf("%d\n", cnt);

    end = clock(); //시간 측정 끝
    result = ((double)(end - start) / CLOCKS_PER_SEC);
    printf("%f", result);
    return 0;
}