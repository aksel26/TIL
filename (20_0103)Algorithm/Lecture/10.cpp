#include <stdio.h>

using namespace std;
int sum = 0;
int max = -10000;
int digit_sum(int x)
{

    for (int i = x; i > 0; i = i / 10)
    {
        sum = sum + i % 10;
    }

    if (max < sum)
        max = sum;
    

    return sum;
}
int main()
{
    int n;
    scanf("%d", &n);
    int nums;

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &nums);
    }
    printf("%d",digit_sum(nums));

    return 0;
}