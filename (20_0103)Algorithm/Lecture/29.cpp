#include <stdio.h>

int main()
{
    int n;

    scanf("%d", &n);
    int cnt3 = 0;

    for (int i = 1; i <= n; i++)
    {
        int num = i;
        while (num != 0)
        {
            int temp = num % 10;
            if (temp == 3)
            {
                cnt3++;
            }
            num /= 10;
        }
    }

    printf("%d\n", cnt3);

    return 0;
}