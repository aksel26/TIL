
#include <stdio.h>

bool isPrime(int x)
{
    for (int i = 2; i < x; i++)
    {
        if (x % i == 0)
            return false;
    }
    return true;
}

int main()
{

    printf("%d\n", isPrime(97));

    return 0;
}