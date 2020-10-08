#include <stdio.h>
#include <time.h>

int main()
{
    clock_t start, end;
    start = clock();
    double clockResult;

    int a[11];
    int b[11];
    int scoreA = 0;
    int scoreB = 0;
    int lw = 0;
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &b[i]);
    }

    for (int i = 0; i < 10; i++)
    {
        if (a[i] > b[i])
        {
            scoreA += 3;
            lw = 1;
        }
        else if (a[i] < b[i])
        {
            scoreB += 3;
            lw = 2;
        }
        else if (a[i] == b[i])
        {
            scoreA += 1;
            scoreB += 1;
        }
    }

    printf("%d %d\n", scoreA, scoreB);

    if (scoreA > scoreB)
    {
        printf("A\n");
    }
    else if (scoreA < scoreB)
    {
        printf("B\n");
    }
    else if (scoreA == scoreB)
    {
        if (lw == 1)
            printf("A\n");
        else if (lw == 2)
            printf("B\n");
        else if (lw == 0)
            printf("D\n");
    }

    end = clock(); //시간 측정 끝
    clockResult = ((double)(end - start) / CLOCKS_PER_SEC);
    printf("%f", clockResult);

    return 0;
}