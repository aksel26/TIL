#include <stdio.h>

using namespace std;

int max = -10000;
int digit_sum(int x)
{
    int sum = 0, temp;
    while (x > 0)
    {
        temp = x % 10;
        sum += temp;
        x = x / 10;
    }

    return sum;
}
int main()
{
    int n, sum, res;
    scanf("%d", &n);
    int nums;

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &nums);
        sum = digit_sum(nums);
        if (sum > max)
        {
            max = sum;
            res = nums;
        }
        else if (sum == max)
        {
            if (nums > res)
                res = nums;
        }
    }

    printf("%d\n", res);

    return 0;
}