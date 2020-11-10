#include <stdio.h>

int main()
{

    int n, cnt = 1, i, j, res;
    scanf("%d", &n);
    int a[4] = {2, 3, 5};
    int tmp;

    for (i = 2; i <= n; i++)
    {
        tmp = i;
        for (j = 0; a[j] != '\0'; j++)
        {
            
            if (tmp % a[j] == 0)
            {
                 

                tmp = tmp / a[j];

                if (tmp == 1)
                {
                    
                    cnt++;
                    break;
                }
                j = 0;
            }
        }
    }

    // printf("%d\n", 6 % 2);
    printf("%d\n", cnt);

    return 0;
}