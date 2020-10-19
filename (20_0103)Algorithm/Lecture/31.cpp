#include <stdio.h>

int main()
{

    char a[10];
    int i;
    int resC = 0;
    int resH = 0;
    int total = 0;
    scanf("%s", &a);

    for (i = 0; a[i] != '\0'; i++)
    {
        if (a[i] == 'C')
        {
            resC += 12;
            if (a[i + 1] >= 49 && a[i + 1] <= 57)
            {
                resC = resC * (a[i + 1] - 48);
            }
        }
        else if (a[i] == 'H')
        {
            resH += 1;
            if (a[i + 1] >= 49 && a[i + 1] <= 57)
            {
                resH = resH * (a[i + 1] - 48);
            }
        }
    }

    total = resH + resC;

    printf("%d\n", total);
    return 0;
}