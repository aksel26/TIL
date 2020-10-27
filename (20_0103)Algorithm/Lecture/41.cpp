#include <stdio.h>
#include <vector>

using namespace std;

int main()
{

    int n, i, pt, sum = 0;

    scanf("%d", &n);
    vector<int> a(n);
    for (i = 1; i <= n; i++)
    {
        a[i] = i;
    }

    while (sum != n)
    {
        pt = n / 2 + 1;
        sum += a[pt--];
        printf("%d ", sum);
        break;
        if (sum == n)
        {
            printf("%d + %d = %d", pt, pt - 1, n);
        }else{
            pt--;

        }
    }

    return 0;
}
