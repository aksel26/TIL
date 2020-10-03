#include <stdio.h>

using namespace std;

int main()
{
    int n, cnt = 0;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if (i % j == 0)
            {
                cnt++;
            }
        }
        printf("%d ", cnt);
        cnt = 0;
    }

    return 0;
}