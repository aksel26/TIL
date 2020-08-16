#include <stdio.h>
#include <math.h>

// 비소수는가 대칭형이라는 점을 이용해 제곱근으로 end범위를 구함.
bool isPrime(int x)
{
    int end = (int)sqrt(x);
    for (int i = 2; i <= end; i++)
    {
        if (x % 2 == 0)
            return false;
    }

    return true;
}
int main(void)
{
    printf("%d\n", isPrime(97));
    return 0;
}
