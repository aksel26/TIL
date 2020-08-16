#include <stdio.h>

int number = 1000;
int a[100001];

void primeNumSieve()
{

    for (int i = 2; i <= number; i++)
    {
        a[i] = i;
    }

    for (int i = 2; i <= number; i++)
    {
        if (a[i] == 0)
            continue;
        for (int j = i + i; j <= number; j += i)
        {
            // 지워준다는 의미.
            a[j] = 0;
        }
    }

    for (int i = 2; i <= number; i++)
    {
        if (a[i] != 0)
            printf("%d\n", a[i]);
    }
}

int main(int argc, char const *argv[])
{

    primeNumSieve();
    return 0;
}
