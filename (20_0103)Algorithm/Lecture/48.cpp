#include <stdio.h>
#include <stdlib.h>
#include <math.h>

using namespace std;

int a[10][10];
int b[10][2];
int main()
{
    int i, j, k, sum, tmp, min = 2147000;
    float avg;
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 9; j++)
        {
            scanf("%d", &a[i][j]);
            sum += a[i][j];
        }
        avg = sum / 9;
        b[i][0] = round(avg);
        sum = 0;
    }

    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 9; j++)
        {
            int tmp = b[i][0] - a[i][j];
            if (tmp < 0)
                tmp = tmp * -1;

            if (tmp < min)
            {
                min = tmp;
                if (j <= 9)
                {
                    b[i][1] = a[i][j];
                }
            }
        }

        min = 21470000;
    }

    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }

    return 0;
}