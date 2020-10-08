#include <stdio.h>
#include <time.h>

int main()
{
    clock_t start, end;
    start = clock();
    double clockResult;

    int n;
    scanf("%d", &n);
    int a[n];
    int b[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &b[i]);
    }

    for (int i = 0; i < n; i++)
    {
        if (a[i] == 1)
        {
            if (b[i] == 3)
                printf("A\n");
            else if (b[i] == 2)
                printf("B\n");
            else if (a[i] == b[i])
                printf("D");
        }

        else if (a[i] == 2)
        {
            if (b[i] == 1)
                printf("A\n");
            else if (b[i] == 3)
                printf("B\n");
            else if (a[i] == b[i])
                printf("D");
        }

        else if (a[i] == 3)
        {
            if (b[i] == 2)
                printf("A\n");
            else if (b[i] == 1)
                printf("B\n");
            else if (a[i] == b[i])
                printf("D\n");
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (a[i] == b[i])
            printf("D\n");
        else if (a[i] == 1 && b[i] == 3)
            printf("A\n");
        else if (a[i] == 2 && b[i] == 1)
            printf("A\n");
        else if (a[i] == 3 && b[i] == 2)
            printf("A\n");
        else
            printf("%B\n");
    }

    end = clock(); //시간 측정 끝
    clockResult = ((double)(end - start) / CLOCKS_PER_SEC);
    printf("%f", clockResult);

    return 0;
}