#include <stdio.h>

int a[1001];

int main()
{

    int n, k, i;

    scanf("%d %d", &n, &k);

    for (i = 1; i <= n; i++)
    {
        a[i] = i;
    }

    int idx = 1;

    while (1)
    {
        idx++;

        if (idx % k == 0)
        {
            printf("%d ", idx);
            a[idx] = -1;
            idx = idx + 1;
        }


        if(idx == 6){
            break;
        }   
    }

    for ( i = 1; i <= n ; i++)
    {
        printf("%d ", a[i]);
    }
    




    return 0;
}