
#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long n, m;
    scanf("%lld %lld", &n, &m);

    printf("%lld\n", abs(m - n));

    return 0;
}