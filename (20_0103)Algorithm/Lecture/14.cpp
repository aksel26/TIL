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
        }
    }
    return true;
}

int reverse(int x)
{
    char a[100001];

    sprintf(a, "%d", x);

    int right = strlen(a) - 1;
    int left = 0;

    while (1)
    {
        int temp = a[right];
        a[right] = a[left];
        a[left] = temp;

        left++;
        right--;

        if (left == right || left > right)
            break;
    }

    int res = atoi(a);

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
        int tmp = reverse(nums);
        if (isPrime(tmp))
        {
            printf("%d ", tmp);
        }
    }

    return 0;
}
