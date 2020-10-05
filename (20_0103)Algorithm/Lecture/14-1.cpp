#include <stdio.h>
#include <string>
#include <math.h>

bool isPrime(int x)
{
    if (x == 1)
        return false;

    int sqrtNum = (int)sqrt(x);

    for (int i = 2; i <= sqrtNum; i++)
    {

        if (x % i == 0)
        {
            return false;
            break;
        }
    }

    return true;
}

int reverse(int x)
{

    int res = 0;

    while (x > 0)
    {

        int tmp = x % 10;
        res = res * 10 + tmp;
        x = x / 10;
    }

    return res;
}

int main()
{
    int n, tmp;
    scanf("%d", &n);
    int nums;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &nums);
        tmp = reverse(nums);
        if (isPrime(tmp))
        {
            printf("%d ", tmp);
        }
    }

    return 0;
}
