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
        }
        else if (a[i] < b[i])
        {
            scoreB += 3;
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
    else if (scoreA == scoreB)
    {

        for (int i = 9; i >= 0; i--)
        {
            if (a[i] == b[i])
            {
                continue;
            }
            else if (a[i] > b[i])
            {
                printf("A\n");
                break;
            }
            else if (a[i] < b[i])
            {
                printf("B\n");
                break;
            }
        }
    }
    else
        printf("B\n");

    end = clock(); //시간 측정 끝
    clockResult = ((double)(end - start) / CLOCKS_PER_SEC);
    printf("%f", clockResult);

    return 0;
}