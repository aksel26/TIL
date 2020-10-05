#include <stdio.h>
#include <string>
#include <math.h>

bool isPrime(int x)
{
    int sqrtNum = (int)sqrt(x);
    printf("%d ", sqrtNum);
    for (int i = 2; i <= sqrtNum; i++)
    {
        if (sqrtNum % i != 0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
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
    if (isPrime(res) == true)
    {
        return res;
    }

    // return res;
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
    }

    return 0;
}
