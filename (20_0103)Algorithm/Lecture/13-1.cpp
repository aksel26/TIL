#include <stdio.h>

char a[10];

int main()
{
    int max = -214700000, res, digit;
    char a[101];
    scanf("%s", &a);

    for (int i = 0; a[i] != '\0'; i++)
    {
        digit = a[i] - 48;
        a[digit]++;
    }

    for (int i = 0; i < 10; i++)
    {
        if (a[i] >= max)
        {
            max = a[i];
            res = i;
        }
    }

    printf("%d\n", res);

    return 0;
}