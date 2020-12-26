#include <stdio.h>

int main()
{
    int a, b, c, d;

    scanf("%d %d %d %d", &a, &b, &c, &d);

    c += d;
    b += c / 60;
    a += b / 60;

    printf("%d %d %d\n", a % 24, b % 60, c % 60);

    return 0;
}