#include <stdio.h>

int main()
{
    int a, b, c;

    scanf("%d %d %d", &a, &b, &c);
    int hour = a;
    int min = b;
    hour = hour + c / 60;

    min = min + c % 60;
    if (min >= 60)
    {
        hour = hour + min / 60;
    }
    printf("%d %d\n", hour % 24, min % 60);

    return 0;
}