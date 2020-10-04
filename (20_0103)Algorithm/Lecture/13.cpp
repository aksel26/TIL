#include <stdio.h>

int a[100];

int main()
{

    int n;
    int temp;
    int max = -10000;
    scanf("%d", &n);

    while (n != 0)
    {
        temp = n % 10;
        a[temp]++;
        n /= 10;
    }

    for (int i = 0; i < 10; i++)
    {
        // 같은 값이어도 큰 숫자를 출력하기 위해 '>='
        if (a[i] >= max)
            max = i;
    }
    printf("%d ", max);
    return 0;
}